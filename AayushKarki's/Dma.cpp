#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int size;
    int *ptr;
    cout << "enter the size of the array : ";
    cin >> size;

    ptr = new int[size];
    cout << "Enter all of the values to be stored in the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    cout << "\nThe stored value in the array is  " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }
}