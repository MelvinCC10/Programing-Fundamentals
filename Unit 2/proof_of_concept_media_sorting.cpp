#include<iostream>

using namespace std;

int main()
{

  string fileName1, fileName2, fileName3, fileName4, fileName5;
  double fileSize1, fileSize2, fileSize3, fileSize4, fileSize5;
  double sumFileSize, averageFileSize;

  cout << "\tEnter file name and file size in MB separated by a space: ";
  cin >> fileName1 >> fileSize1;
  cout << "\tEnter file name and file size in MB separated by a space: ";
  cin >> fileName2 >> fileSize2;
  cout << "\tEnter file name and file size in MB separated by a space: ";
  cin >> fileName3 >> fileSize3;
  cout << "\tEnter file name and file size in MB separated by a space: ";
  cin >> fileName4 >> fileSize4;
  cout << "\tEnter file name and file size in MB separated by a space: ";
  cin >> fileName5 >> fileSize5;
  cout << "\n";

  sumFileSize = fileSize1 + fileSize2 + fileSize3 + fileSize4 + fileSize5;
  averageFileSize = sumFileSize/5;

  cout << "\t\t" << fileName1 << " is " << fileSize1 << "MB\n";
  cout << "\t\t" << fileName2 << " is " << fileSize2 << "MB\n";
  cout << "\t\t" << fileName3 << " is " << fileSize3 << "MB\n";
  cout << "\t\t" << fileName4 << " is " << fileSize4 << "MB\n";
  cout << "\t\t" << fileName5 << " is " << fileSize5<< "MB\n";
  cout << "\n\n\t" << "You are using " << sumFileSize << "MB total";
  cout << "\n\t" << "On average each file is " << averageFileSize << "MB in size";
  cout << "\n\n\n";


}
