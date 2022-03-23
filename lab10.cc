#include <iostream> 
#include <fstream> 
#include <iomanip> 

using namespace std; 

int main()
{

ifstream instream, instream1; 
string data1, data2; 
double pricing[6]; 
string parts[6];
int count = 6;

cout << "Enter data1 "; 
cin >> data1; 
// opens data for pricing
instream.open(data1); 

if(instream.fail()) 
{
    cout << "Error: File 1 can't be opened" << endl; 
    exit(0); 
}

instream >> pricing[0]; 
do{

for (int i = 1; i < count; i++)
{
   instream >> pricing[i]; 
}


}while(!instream.eof()); 
instream.close(); 


cout << "Enter data2 "; 
cin >> data2; 

//opens data for parts 
instream1.open(data2); 
if (instream1.fail()) 
{
    cout << "Error: file 2 can't be opended" << endl; 
    exit(0); 
}

instream1 >> parts[0];

do{ 

for(int i= 1; i < count; i++) 
{
   instream1 >> parts[i]; 
   
}





}while(!instream.eof()); 
instream1.close(); 

cout << fixed << setprecision(2); 
    cout << "Most expensive Part is " << parts[2] << ' ' << '$'<< pricing[2] << endl;
    cout << "Least Expensive Part is " << parts[0] << ' '<< '$' << pricing[0] << endl;
    
    
    
    
    
    
    
    return 0; 
}

