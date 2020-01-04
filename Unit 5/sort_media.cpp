/*
*
*   Name: Melvin Cordon
*   Class: CSIS 123 Fall 2019
*   Project: Unit 5
*   Description: Sorts file into music, movie, or series lists based on user input.
*
*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

const string INDATA = "unsorted_media_unit_05.txt";
const string MUSIC_LIST = "music.txt";
const string MOVIE_LIST = "movies.txt";
const string SERIES_LIST = "series.txt";

int main()
{

  string media_file;
  char choice;

	ifstream unsorted_media;
  ofstream music_list;
	ofstream movie_list;
  ofstream series_list;

  unsorted_media.open(INDATA);
  music_list.open(MUSIC_LIST);
  movie_list.open(MOVIE_LIST);
  series_list.open(SERIES_LIST);

  unsorted_media >> media_file;
  while (!unsorted_media.eof())
  {
    cout << "The file is entitled: " << media_file << endl;
    cout << "sort this into Movies ( M ), Music ( U ), or Series ( S ): ";

    cin >> choice;
    switch(toupper(choice))
    {
      case 'M':
      movie_list << media_file << endl;
      media_file = " ";
	    unsorted_media >> media_file;
      break;

      case 'U':
      music_list << media_file << endl;
      media_file = " ";
	    unsorted_media >> media_file;
      break;

      case 'S':
      series_list << media_file << endl;
      media_file = " ";
      unsorted_media >> media_file;
      break;

      default:
      cout << "INVALID INPUT" << endl;
      media_file = " ";
      unsorted_media >> media_file;
    }

  }

  unsorted_media.close();
  movie_list.close();
  music_list.close();
  series_list.close();

  return 0;
}
