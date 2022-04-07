#include <iostream> 
#include <vector>
#include <string>
#include <fstream>
#include <iomanip> 

using namespace std; 

struct Employees
{
    string firstName; 
    string lastName; 
    string id; 
    double salary;
};

// constants and function prototypes 
void loadVector ( string filename, vector <Employees> &Allemployees);
void printOut (vector <Employees> &Allemployees, int payroll); 
void printEmployee (Employees e); 
vector <Employees> Allemployees;  
int returnSalary (vector <Employees> &Allemployees); 




int main()
{
string filename = "employees.txt"; 
vector <Employees> Allemployees;  
int payroll; 

Employees e; 






loadVector(filename, Allemployees); 
//printEmployee(e); 



payroll = returnSalary(Allemployees); 


printOut(Allemployees, payroll);



    return 0;
}///main 

void loadVector ( string filename, vector <Employees> &Allemployees)

{
    Employees e; 
    ifstream instream; 
    string line; 
    

    instream.open(filename); 

    if (instream.fail()) 
    {
        cout << "Error file can't be opened";
        exit(0);

    }

   for(int i = 0; i < 6; i++)
   {
       instream >> e.id; 
       cout << e.id << endl; 
       instream >> e.firstName; 
       instream >> e.lastName; 
       instream >> e.salary;
    Allemployees.push_back(e); 

   }
instream.close(); 
   
}

void printOut (vector <Employees> &Allemployees, int payroll)
{
    cout << "Sorted by Name" << endl; 
    cout << endl; 
    cout << "ID" << '\t' << "Name" << '\t' << '\t' << "     " << "Salray" <<endl;

    cout << "----------------------------------------" << endl; 
    
    for (size_t i = 0; i < Allemployees.size(); i++) 
{
   printEmployee(Allemployees.at(i)); 
}

cout << "Total Payroll: " << "$" <<  payroll << endl; 
    
} 

void printEmployee (Employees e)
{
    string fullname = e.firstName + " " + e.lastName; 
   cout << setw(8) << left << e.id << " " << setw(20) << fixed << fullname << setprecision(2) << fixed <<  "$" << e.salary << endl;
}

int returnSalary (vector <Employees> &Allemployees)
{
    int total  = 0; 

    for (size_t i = 0; i < Allemployees.size(); i++) 
    {
        total+= Allemployees.at(i).salary; 

    }

    return total; 
}