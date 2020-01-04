/*
*
*   Name: Melvin Cordon
*   Class: CSIS 123 Fall 2019
*   Project: Unit 4
*   Description: a file containing media, and the request is to accept or delete each entry in the media file
*
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

const string INDATA = "movie_list.txt";
const string KEEP_MOVIES = "Keep_Movies.txt";
const string DELETED_MOVIES = "Deleted_Movies.txt";

int main() {

	ifstream Input_Movie_List;
	ofstream Keep_Movies;
	ofstream Deleted_Movies;

	// Input Varibles
	string movie1Title;
	char choice;

	Input_Movie_List.open(INDATA);
	Keep_Movies.open(KEEP_MOVIES);
	Deleted_Movies.open(DELETED_MOVIES);

  Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
      case 'Y':
        Keep_Movies << movie1Title << endl;
      break;

      case 'y':
        Keep_Movies << movie1Title << endl;
      break;

      case 'N':
        Deleted_Movies << movie1Title << endl;
      break;

      case 'n':
        Deleted_Movies << movie1Title << endl;
      break;

      default:
      cout << "INVALID INPUT, Keeping " << movie1Title << endl;
      Keep_Movies << movie1Title << endl;
		}

		movie1Title = "";



	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}

	Input_Movie_List >> movie1Title;
	if (movie1Title != "")
	{
		cout << "Do you want to keep this movie " << movie1Title <<  " (Y/N): ";
		cin >> choice;

		switch(choice)
		{
		case 'Y':
	Keep_Movies << movie1Title << endl;
		break;

		case 'y':
		Keep_Movies << movie1Title << endl;
		break;

		case 'N':
	Deleted_Movies << movie1Title << endl;
		break;

		case 'n':
		Deleted_Movies << movie1Title << endl;
		break;

		default:
		cout << "INVALID INPUT, Keeping " << movie1Title << endl;
		Keep_Movies << movie1Title << endl;

		}

		movie1Title = "";

	}


	Input_Movie_List.close();
	Keep_Movies.close();
	Deleted_Movies.close();


	return 0;
}
