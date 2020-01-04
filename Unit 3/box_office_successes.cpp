/*
*
*   Name: Melvin Cordon
*   Class: CSIS 123 Fall 2019
*   Project: Unit 3
*   Description: This program calculates the profit of a movie given its budget and gross amount
*
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

const string INDATA = "input_file.txt";
const string OUTDATA = "output_file.txt";

int main() {

	ifstream input_file;
	ofstream output_file;

  // Input Varibles
	string movie1Title, movie2Title, movie3Title, movie4Title, movie5Title;
	double movie1Budget, movie2Budget, movie3Budget, movie4Budget, movie5Budget;
	double movie1Gross, movie2Gross, movie3Gross, movie4Gross, movie5Gross;

  // Calculated varibles
	double movie1Profit, movie2Profit, movie3Profit, movie4Profit, movie5Profit;

	input_file.open(INDATA);
  input_file >> movie1Title >> movie1Budget >> movie1Gross;
  input_file >> movie2Title >> movie2Budget >> movie2Gross;
  input_file >> movie3Title >> movie3Budget >> movie3Gross;
  input_file >> movie4Title >> movie4Budget >> movie4Gross;
  input_file >> movie5Title >> movie5Budget >> movie5Gross;
	input_file.close();

  //Calculating Profit
	movie1Profit = movie1Gross - movie1Budget;
	movie2Profit = movie2Gross - movie2Budget;
	movie3Profit = movie3Gross - movie3Budget;
	movie4Profit = movie4Gross - movie4Budget;
	movie5Profit = movie5Gross - movie5Budget;

	output_file.open(OUTDATA);
	output_file << fixed << showpoint << setprecision(2);
	output_file << left << "Movie Title: "		<< movie1Title << endl;
	output_file << left << "Budget: $"			<< movie1Budget << endl;
	output_file << left << "Gross: $"			<< movie1Gross << endl;
	output_file << left << "Profit Margin: $"	<< movie1Profit << "\n" << endl;

	output_file << left << "Movie Title: "		<< movie2Title << endl;
	output_file << left << "Budget: $"			<< movie2Budget << endl;
	output_file << left << "Gross: $"			<< movie2Gross << endl;
	output_file << left << "Profit Margin: $"	<< movie2Profit << "\n" << endl;

	output_file << left << "Movie Title: "		<< movie3Title << endl;
	output_file << left << "Budget: $"			<< movie3Budget << endl;
	output_file << left << "Gross: $"			<< movie3Gross << endl;
	output_file << left << "Profit Margin: $"	<< movie3Profit << "\n" << endl;

	output_file << left << "Movie Title: "		<< movie4Title << endl;
	output_file << left << "Budget: $"			<< movie4Budget << endl;
	output_file << left << "Gross: $"			<< movie4Gross << endl;
	output_file << left << "Profit Margin: $"	<< movie4Profit << "\n" << endl;

	output_file << left << "Movie Title: "		<< movie5Title << endl;
	output_file << left << "Budget: $"			<< movie5Budget << endl;
	output_file << left << "Gross: $"			<< movie5Gross << endl;
	output_file << left << "Profit Margin: $"	<< movie5Profit << "\n" << endl;
	output_file.close();

	return 0;
}
