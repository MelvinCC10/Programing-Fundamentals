/*
*	Name: Melvin Cordon
*	Class: CSIS 123
*	Project: Sorts and counts number of time a movie was chosen
*	Description: 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void fill_array(string, string[], int, string[], int);
void sort_array(string[], int);
bool is_unique(string[], int, int);
void count_votes(string[],int, string[], int[], int);
void print_results(string[], int[], int);
int sum_votes(int[], int);
int win_idx(int[], int);

const int TOT_SELECTIONS = 30;
const int MOVIES = 12;

int main()
{
	string selected_choices[TOT_SELECTIONS];
	string choices[MOVIES];
	int choice_tally[MOVIES];

	string selections = "user_selections.txt";

	fill_array(selections, selected_choices, TOT_SELECTIONS, choices, MOVIES);
	count_votes(selected_choices, TOT_SELECTIONS, choices, choice_tally, MOVIES);
	print_results(choices, choice_tally, MOVIES);

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}


void fill_array(string file,string arr[], int arr_sz,string mov[],int mov_sz)
{ // move txt file into an array
	int num = 0;
	string name;
	ifstream fin;
	fin.open(file);

	for (int i = 0; i < arr_sz; i++)
	{
		fin >> name;
		if(name.size() > 4 && i < arr_sz) // only use good data
			{
        arr[i] = name;
      }

	}

	fin.close();

	sort_array(arr, arr_sz);

	int mo = 0;
	int ar = 0;

	do
	{ // fill smaller array
		if(mo == 0 && ar == 0)
		{ // index zero unique
			mov[mo] = arr[ar];
			mo++;
      arr++; // Error was found here, arr indx was not being increased.
		}
		else if (is_unique(arr, arr_sz, ar))
		{
			mov[mo] = arr[ar];
			mo++;
      arr++; // Error was found here, arr indx was not being increased.
		}
		else
			ar++;
	} while (mo < mov_sz);
}


void sort_array(string arr[],int sz)
{ // sorting array to alpha order
	for (int i = 0; i < sz; i++)
		for (int j = i++; j < sz; j++)
		{
			if (arr[i] > arr[j] && i < sz && j < sz)
				arr[i].swap(arr[j]);
		}
}

bool is_unique(string arr[],int arr_sz, int idx)
{ // find a unique entry in the array
	if (idx == 0 && idx < arr_sz)
		return true;
	else if (arr[idx] != arr[idx - 1] && idx < arr_sz)
		return true;
	else
		return false;
}

void count_votes(string arr[], int sz,string mov[],int vts[], int vt_sz)
{ // count the repeats in the original array
	int vt_ct = 0;
  int mo;

	for (mo = 0; mo < vt_sz; mo++)
	{
		for (int ar = 0; ar < sz; ar++)
		{
     
			if (arr[ar] == mov[mo])
      {
				vt_ct = vt_ct+1;
      }
    }
      // write the vote to the vts array // error found here, this portion was in the wrong for loop.
      vts[mo] = vt_ct;
      
      vt_ct = 0;
			
		
	}
}

void print_results(string mov[], int vts[], int sz)
{
	int total = sum_votes(vts, sz);


	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << left << setw(50) << "Movie"
		<< setw(10) << "Votes Received"
		<< setw(15) << "% of Total Votes" << endl;
	for (int i = 0; i < sz; i++)
		cout << left << setw(50) << mov[i]
		<< right << " " << setw(10) << vts[i] << "   " << setw(15)
		<< (static_cast<double>(vts[i]) / static_cast<double>(total)) * 100
		<< endl;

	cout << "Total            " << total << endl;

	cout << "The Winning Movie is: "
		<< mov[win_idx(vts, sz)]
		<< "." << endl;

}

int sum_votes(int vts[], int sz)
{ // total of all votes
	int sum = 0;
  int i;
	for (i = 0; i < sz; i++)
  {
		sum = sum + vts[i];
    
  }

	return sum;
}

int win_idx(int vts[], int sz)
{ // movie with most votes
	int idx = 0;

	for (int i = 0; i < sz; i++)
		if (vts[i] > vts[idx])
			idx = i;

	return idx;
}



