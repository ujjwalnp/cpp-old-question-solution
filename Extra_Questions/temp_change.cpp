// Write a program in C++ to convert temperature in Kelvin to Celsius.

#include <iostream>
using namespace std;
 
int main()
{
    float kel, cel;
		cout << "\n\n Convert temperature in Kelvin to Celsius  :\n";
		cout << "------------------------------------------------\n";	
    cout << " Input the temperature in Kelvin : ";
    cin >> kel;
    cel = kel - 273.15;
    cout << " The temperature in Kelvin    : " << kel << endl;
    cout << " The temperature in Celsius : " << cel << endl;
	cout << endl;
    return 0;
}