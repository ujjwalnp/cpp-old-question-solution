// by ujjwal
// Question : WAP to read a height of a person in Feet and Inches and convert it into Meter using user defined to class type conversion method. 1 meter = 3.28084 feet, 1 feet = 12 inch

#include<iostream>
using namespace std;
    
class Height_Converter {
    private :
        int feet, inches;
        float meter ;
    
    public : 
        void input(){
            cout<<"What is your height ?\nFeet : ";
            cin>>feet;
            cout<<"Inches : ";
            cin>>inches;
        }
        float calc () {
            float floatoffeet = (float) feet;
            float floatofinches = (float) inches;
            float total_feet = floatoffeet + floatofinches/12;
            float result = total_feet / 3.28084;
            return result;
        } 
        void display () {
            cout<<"Your height in meter is "<<calc()<<endl;
        }
};
int main () {
    Height_Converter h;
    h.input();
    h.display();

    return 0;
}