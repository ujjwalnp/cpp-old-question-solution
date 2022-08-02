// WAP to find largest of four integer numbers. Your program should have three classes and each classes should have one integer number

#include<iostream>
using namespace std;

// early initilization of classes
class ClassB;
class ClassC;

class ClassA {
    public :
        int num1 = 4;
    public:
        friend void largest (ClassA a, ClassB b, ClassC c, int num4);   // decleartion of friend function
};
class ClassB {
    public :
        int num2 = 8;
    public:
        friend void largest (ClassA a, ClassB b, ClassC c, int num4);   // decleartion of friend function
};
class ClassC {
    public :
        int num3 = 2;
        int num4 = 6;
    public:
        friend void largest (ClassA a, ClassB b, ClassC c, int num4);    // decleartion of friend function
};

// defination of friend function
void largest (ClassA a, ClassB b, ClassC c, int num4) {
    int largest_num = a.num1;

    // calculation         4   8   2    50
    if(a.num1>b.num2 && c.num3 && num4)
    {
        cout<<"Class a have highest value "<<a.num1<<endl;
    }

    else if(b.num2>c.num3 && num4)
    {
        cout<<"Class b have highest value "<<b.num2<<endl;
    }
    else if (c.num3 > num4){
        cout<<"Class c have heighest value"<<c.num3<<endl;
    }

    else
    {
        cout<<"Class num4 have highest value "<<num4<<endl;
    }
}
    




int main(){
    ClassA a;
    ClassB b;
    ClassC c;

    cout<<"The largest number is "<<largest(a, b, c, 50)<<endl;

    return 0;
}