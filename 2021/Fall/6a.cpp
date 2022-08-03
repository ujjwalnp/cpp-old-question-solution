// 

#include<iostream>
using namespace std;

class Complex {
    private :
        int real, imaginary;
        int real1, imaginary1;
        int sum_real, sum_imaginary;
    public :
        Complex () {
            real = 5;
            imaginary = 7;
        }
        Complex (int real, int imaginary) {
            this->real = real;
            this->imaginary = imaginary;
        }
        Complex operator++() {
            real++;
            imaginary++;
        }
        void input() {
            cout<<"Enter another complex number\nreal = ";
            cin>>real1;
            cout<<"imaginary = ";
            cin>>imaginary1;
        }
        Complex operator+ () {
            sum_real = real + real1;
            sum_imaginary = imaginary + imaginary1;
        }
        void display () {
            cout<<"increament result \nreal = "<<real<<"\nimaginary = "<<imaginary<<endl;
            cout<<"added complex number result : "<<sum_real<<" i "<<" + "<<sum_imaginary<<" j "<<endl;
        }
};
int main () {
    Complex c;
    ++c;
    c.input();
    +c;
    c.display();
    return 0;

}