#include <iostream>


using namespace std; 

//Class Declaration 

class Counter 
{

public: 
// constructors 
Counter(); 
Counter(int new_val); 


//mutators / setters 
void setValue(int neValue);

//accessors / getters 

int get_Value(); 
int getInc_value(); 

//Helper functions 
void increment(); 
void output(); 


private: 
//member variables 
int value;
int inc_value; 

}; 


int main()
{

Counter c; 
c.setValue(11); 
c.increment(); 
c.output(); 








return 0; 
}/// main 

//Constructor functions 

Counter :: Counter() // initializes value to 0 
{
    value = 0; 
}

// Mutator Functions 

void Counter :: setValue(int newValue) 
{
    if (newValue > 0)
    {
        value = newValue;
    }
}


// Accessor functions 

int Counter :: get_Value()
{
    return value; 
}

int Counter :: getInc_value() 
{
    return inc_value; 
}

// Helper functions 
void Counter :: increment()
{
    if (value < 10) 
    {
        inc_value = value + 1; 
    }
    else 
    {
        inc_value = value;
    }
}

void Counter :: output() 
{
    cout << "The original vale is: " << value << endl;  
    cout << "The incremented value is: " << inc_value << endl; 
}