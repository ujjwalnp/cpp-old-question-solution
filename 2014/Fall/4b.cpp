// Define two class named 'Polar' and 'Rectangle' to represent points in polar and rectangle systems. Use conversion routine to convert from one system to another system.

#include<bits/stdc++.h>
using namespace std;

// Early initilization
class Rectangle;

class Polar {   // Polar form : r (cos(angle) + i sin(angle))
    private :
        float r, angle;
    public :
        void input(){
            cout<<"r (magnitude) = ";
            cin>>r;
            cout<<"angle = ";
            cin>>angle;
        }
        friend void polar_to_rectangle (Polar p, Rectangle r);
};

class Rectangle {  //  Rectangular form : a + i b
    private :
        float a, b;
    public :
        friend void polar_to_rectangle (Polar p, Rectangle r);
};

void polar_to_rectangle (Polar pol, Rectangle rec){
    // Welcome message
    cout<<"Program to convert polar form to Rectangular form"<<endl;

    // taking input
    pol.input();    

    // calculation of real && imaginary part
    rec.a = pol.r*cos(pol.angle);
    rec.b = pol.r*sin(pol.angle);

    // printing
    cout<<"Rectangular form : "<<rec.a<<" + i("<<rec.b<<")"<<endl;
}

int main () {
    // creating objects of classes
    Polar pol;
    Rectangle rec;

    // calling friend function
    polar_to_rectangle(pol, rec);
    
    return 0;
}