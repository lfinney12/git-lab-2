#include <iostream>
#include <iomanip>
using namespace std; 

//Class Declaration 
class Tollbooth
{
public: 
// constructor 
Tollbooth(); 



//helper functions
void display(ostream &fileout); 
void payinCar(); 
void nopayCar(); 



private:  
// member variables 
int carsNum; 
double total_money; 



};



int main()
{

char option; 
Tollbooth t;


do
{
cout << "Please use all lowercase" << endl;
cout << "p - paid , n - not paid, q - quit" << endl; 
cout << "enter option: "; 
cin >> option; 
while(option != 'p' && option != 'n' && option != 'q') 
{
    cout << "Option not valid" << endl;
    cout << "Please try again"; 
    cin >> option; 
}
if (option == 'p')
{
    t.payinCar() ; 
}
else if (option == 'n') 
{
    t.nopayCar(); 
}



}while (option != 'q');

t.display(cout); 
cout << "Have a nice day" << endl;










    return 0; 
}

// constructor function

Tollbooth :: Tollbooth()
{
    carsNum = 0; 
    total_money = 0; 
}




//helper functions
void Tollbooth :: display(ostream &fileout)
{
    cout << "Total Number of Cars: " << carsNum <<  endl; 
    cout << fixed << setprecision(2); 
    cout << "Total Money: " << '$' << total_money << endl; 
}


void Tollbooth :: payinCar() 
{
    carsNum += 1; 
    total_money += 0.50; 
}

void Tollbooth :: nopayCar()
{
    carsNum += 1; 
    total_money += 0; 
}