/*
*
*   Name: Melvin Cordon
*   Class: CSIS 123 Fall 2019
*   Project: Unit 6
*   Description: This program display to the user a list of horror_movies. They then chose to select or reject each movie individually
*				 until they have chosen 3 or the list runs out. they are then displayed movies they had selected
*
*/

#include <iostream>
#include<fstream>
#include <string>
#include <cstdlib>

using namespace std;

void displayContents(string);
void userChoice(int&, string);
bool checkPrevCount(int&, int&);
void cleanScreen();

int main()
{

	ifstream horror_movies;
	ofstream party_selection;
  string INDATA_MOVIES = "horror_movies.txt", OUTDATA_PARTY_LIST = "party_selection.txt";

	string movieTitle;
	int count = 0;
	int countPrevious = count;

	horror_movies.open(INDATA_MOVIES);
	party_selection.open(OUTDATA_PARTY_LIST);

	cout << "Please review the following list of movies, and choose three for the party." << endl
		<< "When you are ready to vote on your movies, press enter:" << endl << endl;

	displayContents(INDATA_MOVIES);
	cout << endl;
	system("pause");

	// While the user has not selected 3 movies, and horror movie list is not empty, keep listing movies to user.
	while (!horror_movies.eof() && count < 3)
	{

		horror_movies >> movieTitle;
		userChoice(count, movieTitle);

		// Movie is saved to party_selection.txt if true
		if (checkPrevCount(count, countPrevious) == true)
		{
			party_selection << movieTitle << endl;
		}

	}

	horror_movies.close();
	party_selection.close();

	cleanScreen();
	cout << "\t\tYou have voted for the following horror films" << endl;
	cout << " \t\tPoll selection" << endl << endl;
	displayContents(OUTDATA_PARTY_LIST);
	cout << "\t\t";
	system("pause");

}

void userChoice(int& count, string movieTitle)
{ // Displays a movie choice to user, ask to select or reject. increase count varible is movie is selected.
	char choice;
	bool coin = true;

	cout << "\t\tPress y to select " << movieTitle << " n to reject: ";
	cin >> choice;
  choice = toupper(choice);

	while (coin)
	{
		if (choice == 'Y' || choice == 'N')
		{
			coin = false;
		}
		else
		{
			cout << "\t\tInvalid Key" << endl;
			cout << "\t\tPress y to select " << movieTitle << " n to reject: ";
			cin.clear();
			cin.ignore(500, '\n');
			cin >> choice;
		}
	}

	if (choice == 'Y')
	{
		count++;
	}

	cin.clear();
	cin.ignore(500, '\n');

	return;
}

bool checkPrevCount(int& count, int& countPrevious)
{ // Checks to see if the count varible has changed since the last time this function was called. returns true if it has.
	if (count != countPrevious)
	{
		countPrevious = count;
		return true;
	}
	else
	{
		return false;
	}
}

void displayContents(string filename)
{ // displays contents of a txt file.
	string temp;
	ifstream file;
	file.open(filename);

	while (file)
	{
		file >> temp;
		cout << "\t\t" << temp << endl;
		temp = "";
	}
	cout << endl;
	file.close();
}

void cleanScreen()
{ // clear the terminal screen in cin input stream

	cin.clear();
	system("pause");
	cin.ignore(500, '\n');
	system("cls");

}
