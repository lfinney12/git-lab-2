#include <iostream> 
#include <cctype> 
#include <fstream> 
#include <cstdlib> 
#include <string> 
#include <algorithm>

using namespace std; 

int main() 
{

ifstream instream; 
ofstream outstream; 
string inputFile, outputFile;
string line; 
char ch;

inputFile = "Text.txt"; 

instream.open(inputFile); 

if (instream.fail())
{
    cout << "Error: File can't be opened" << endl; 
    exit(0); 
}

cout << "Enter Name of output file: ";
cin >> outputFile; 

outstream.open(outputFile); 

if (instream.fail()) 
{
    cout << "Error: File can't be opened" << endl; 
    exit(0); 
}


while(getline(instream, line))
{
 transform(line.begin(), line.end(), line.begin(), ::toupper ); 
    while(instream >> ch)
    {
     
    }
 
outstream << line << endl; 
}
instream.close(); 
outstream.close(); 






    return 0; 
} 

