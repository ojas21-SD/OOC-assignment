/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>
/* fstream header file for ifstream, ofstream,
fstream classes */
#include <fstream>
#include <string> // Added for string
using namespace std;
// Driver Code
int main()
{
    cout << "Name - Ojas desai" << endl;
    cout << "Div  - B" << endl;
    cout << "Roll No - 63" << endl;
    cout << "---------------------------" << endl << endl;
// Creation of ofstream class object
ofstream fout;
string line;
// by default ios::out mode, automatically deletes
// the content of the file. To append the content, open in ios::app
// fout.open("sample.txt", ios::app)
fout.open("sample.txt");
cout << "Enter lines of text. Enter -1 to stop.\n";
// Execute a loop If file successfully opened
while (fout) {
// Read a Line from standard input
getline(cin, line);
// Press -1 to exit
if (line == "-1")
break;
// Write line in file
fout << line << endl;
}
// Close the File
fout.close();
// Creation of ifstream class object to read the file
ifstream fin;
// by default open mode = ios::in mode
fin.open("sample.txt");
cout << "\n--- Reading from file ---\n";
// Execute a loop until EOF (End of File)
while (getline(fin, line)) {
// Print line (read from file) in Console
cout << line << endl;
}
// Close the file
fin.close();
return 0;
}