#include <iostream> 
#include <cctype> 
#include <fstream> 

using namespace std; 

int main()
{
ifstream instream; 
ofstream outstream; 
string inputfile; 
int minTemp(int arr[], int count); 
int maxTemp(int arr[], int count); 
double average(int arr[], int count); 
int temp; 
double avr; 
int max, min;
int dailyLow[30];
int count = 30; 
cout << "Enter input file" << endl;  
cin >> inputfile;

instream.open(inputfile); 
if (instream.fail()) 
{
    cout << "Error: file can't be found" << endl; 
    exit(0); 
}
else{
    for (int i = 0; i < count ; i++) 
{
    instream >> temp; 
    dailyLow[i] = temp; 
}

}


instream.close();

min = minTemp(dailyLow, count); 
max = maxTemp(dailyLow, count); 
avr = average(dailyLow, count);
cout << "Min Temp is: " << min << endl; 
cout << "Max Temp is: " << max << endl; 
cout << "Average is: " << avr  << endl;  


return 0; 

}

int minTemp(int arr[], int count)
{
    int min = arr[0]; 
    for(int i = 0 ; i < count ; i++)
    {
        if(arr[i] < min) 
        {
            arr[i] = min; 
        }
    }
    return min; 
}

int maxTemp(int arr[], int count)
{
    int max = arr[0]; 
    for(int i = 0; i < count ; i++) 
    {
        if(arr[i] > max) 
        {
            arr[i] = max; 
        }
    }
    return max; 
}

double average(int arr[], int count) 
{
    int sum = 0; 
    for (int i = 0; i < count; i++) 
    {
        sum = sum + arr[i]; 

    }
    return sum; 
}