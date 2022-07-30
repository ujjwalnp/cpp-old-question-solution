// Using a class write a program that receives inputs principle amount, time and rate. Keeping rate 8% as the default argument, calculate the simple intrest for three customers

#include<iostream>
using namespace std;

class Byaj_baje {
    private :
        int principle_amount;
        float time, rate, intrest;
    public :
        void take_input() {
            cout<<"Enter Principle amount : ";
            cin>>principle_amount;
            cout<<"Enter Time : ";
            cin>>time;
            cout<<"Enter intrest rate : ";
            cin>>rate;
        }
        float intrest_calculation () {
            intrest = principle_amount*time*rate/100;
            return intrest;
        }
        void display_intrest () {
            cout<<"The total intrest is : "<<intrest<<endl;
        }
};
int main(){
    Byaj_baje c1;
    Byaj_baje c2;
    Byaj_baje c3;

    cout<<endl<<"For 1st customer"<<endl;
    c1.take_input();
    c1.intrest_calculation();
    c1.display_intrest();

    cout<<endl<<"For 2nd customer"<<endl;
    c2.take_input();
    c2.intrest_calculation();
    c2.display_intrest();

    cout<<endl<<"For 3rd customer"<<endl;
    c3.take_input();
    c3.intrest_calculation();
    c3.display_intrest();

    return 0;
}