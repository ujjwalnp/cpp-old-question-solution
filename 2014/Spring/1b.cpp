// WAP to find largest of four integer numbers. Your program should have three classes and each classes should have one integer number

#include<iostream>
using namespace std;

// early initilization of classes
class ClassB;
class ClassC;

class ClassA {
    private :
        int num1 = 4;
    public:
        friend int largest (ClassA a, ClassB b, ClassC c);   // decleartion of friend function
};
class ClassB {
    private :
        int num2 = 8;
    public:
        friend int largest (ClassA a, ClassB b, ClassC c);   // decleartion of friend function
};
class ClassC {
    private :
        int num3 = 2;
        int num4 = 6;
    public:
        friend int largest (ClassA a, ClassB b, ClassC c);    // decleartion of friend function
};

// defination of friend function
int largest (ClassA a, ClassB b, ClassC c) {
    int largest_num = a.num1;

    // calculation         4   8   2    6
    if (largest_num < b.num2){
        largest_num = b.num2;
        if (largest_num < c.num3){
            largest_num = c.num3;
            if (largest_num < c.num4){
                largest_num = c.num4;
            }
        }
    }
    return largest_num;
}

int main(){
    ClassA a;
    ClassB b;
    ClassC c;

    cout<<"The largest number is "<<largest(a, b, c)<<endl;

    return 0;
}