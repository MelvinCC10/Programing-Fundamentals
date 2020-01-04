/*
*	Name: Melvin Cordon
*	Class: CSIS 123
*	Project: Media Server Sorting Code
*	Description: Program automatically sorts media file to the appropriate location
*/

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

void cleanup();
int clean_exit(int);
void countContents(string, int&);
string determinFormat(string);
void sort(string, string, string, string, string, string);
void report(string, string, string, string, string, int&, int&, int&, int&, int&);

int main()
{
	string unsortedMediaFile = "unsorted_media.txt";
	string musicFile = "music.txt";
	string movieFile = "movies.txt";
	string imageFile = "images.txt";
	string errorFile = "error.txt";

	int unsortedMediaCount = 0;
	int musicCount = 0;
	int movieCount = 0;
	int imageCount = 0;
	int errorCount = 0;

	countContents(unsortedMediaFile, unsortedMediaCount);
	cout << "You have " << unsortedMediaCount << " to sort." << endl;
	system("pause");
	cout << "Please Wait";


	ifstream unsortedMedias;
	string currentMedia;
	unsortedMedias.open(unsortedMediaFile);
	unsortedMedias >> currentMedia;
	// Here each media in the unsorted list is sorted
	while (!unsortedMedias.eof())
	{
		sort(unsortedMediaFile, musicFile, movieFile, imageFile, errorFile, currentMedia);
		unsortedMedias >> currentMedia;

	}

	unsortedMedias.close();


	countContents(musicFile, musicCount);
	countContents(movieFile, movieCount);
	countContents(imageFile, imageCount);
	countContents(errorFile, errorCount);
	report(unsortedMediaFile, musicFile, movieFile, imageFile, errorFile, unsortedMediaCount, musicCount, movieCount, imageCount, errorCount);
	clean_exit(0);

}


void countContents(string fileName, int& counter)
{ // counts the number of items in a file
	ifstream file;
	string current;
	file.open(fileName);

	while (file)
	{
		counter++;
		file >> current;
	}
}

string determinFormat(string fileName)
{ // This function determins the format of a file

	string format;
	int lastDotPosistion;

	lastDotPosistion = fileName.find_last_of(".");
	format = fileName.substr(lastDotPosistion + 1, lastDotPosistion + 3);

	return format;
}

void sort(string unsortedFileName, string musicFileName, string movieFileName, string imageFileName, string errorFileName, string currentMediaName)
{ // media files are move to their appropriate file locations
	ofstream musicFile, movieFile, imageFile, errorFile;
	string ext;

	musicFile.open(musicFileName, fstream::app);
	movieFile.open(movieFileName, fstream::app);
	imageFile.open(imageFileName, fstream::app);
	errorFile.open(errorFileName, fstream::app);

	ext = determinFormat(currentMediaName);

	if (ext == "avi" || ext == "mkv" || ext == "mov" || ext == "mp4" || ext == "wmv")
		movieFile << currentMediaName << endl;
	else if (ext == "flac" || ext == "m4a" || ext == "mp3" || ext == "wav" || ext == "wma")
		musicFile << currentMediaName << endl;
	else if (ext == "bmp" || ext == "gif" || ext == "jpg" || ext == "png" || ext == "tiff")
		imageFile << currentMediaName << endl;
	else
		errorFile << currentMediaName << endl;

	musicFile.close();
	movieFile.close();
	imageFile.close();
	errorFile.close();
}

void report(string unsortedMediaFile, string musicFile, string movieFile, string imageFile, string errorFile, int& unsortedCount, int& musicCount, int& movieCount, int& imageCount, int& errorCount)
{ // a report is printed to the scrren displaying the number of media items in each file

	cout << setw(21) << left << "SOURCE" << setw(5) << right << "FILES" << endl;
	cout << setw(21) << left << unsortedMediaFile << setw(5) << right << unsortedCount << endl;
	cout << setw(21) << left << musicFile << setw(5) << right << musicCount << endl;
	cout << setw(21) << left << movieFile << setw(5) << right << movieCount << endl;
	cout << setw(21) << left << imageFile << setw(5) << right << imageCount << endl;
	cout << setw(21) << left << errorFile << setw(5) << right << errorCount << endl;
}

void cleanup()
{ // cleanup input stream and display
	cin.clear();
	cin.ignore(500, '\n');
	system("pause");
	system("cls");
}

int clean_exit(int ex)
{ // handle exing program
	cleanup();
	if (ex == 0)
		return EXIT_SUCCESS;
	else
		return EXIT_FAILURE;
}
