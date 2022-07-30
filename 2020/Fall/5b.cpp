// Create a template funtion swap() and use it to swap two integers, two floating point data and two characters.

#include<iostream>
using namespace std;

template<typename Generic>
void swap (Generic parameter1, Generic parameter2) {
    Generic temp = parameter1;
    parameter1 = parameter2;
    parameter2 = temp;
    
    cout<<"Swap result is : \n"<<parameter1<<endl<<parameter2<<endl;
}

int main(){
    swap<int>(5, 6);
    swap<float>(5.5, 6.6);
    swap<char>('x', 'y');
    
    return 0;
}