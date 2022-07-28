// Create a template to find the sum of two integers and floats 

#include<iostream>
using namespace std;

// Class template
template <class T>
class Sum {
    private :
        // variable of type T
        T value;

    public :
        // constructor
        Sum(T n) : value(n){}

        T num (){
            return value;
        }
};

int main() {
    // creating object of int type
    Sum<int> number1(5);
    Sum<int> number2(6);

    // creating object of float type
    Sum<float> number3(5.5);    

    // displaying sum
    cout<<"Sum = "<<number1.num()+number2.num()+number3.num()<<endl;

    return 0;
}