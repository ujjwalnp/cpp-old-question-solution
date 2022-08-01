// 15fall4c by aayush 

// Wap to input the Info of n student and then display it using the concept of mulitlevel inheritance

#include <iostream>
#include <string>
using namespace std;



class Info
{
    public:
        int n;
        string name[150];
        int age[150];
        string standard[150];
        Info () {
            int n;
            string name[n];
            int age[n];
            string standard[n];
        }

        void input()
        {
            cout << "Enter the no. of student whose Info has to be stored : ";
            cin >> n;
            
            cout << "Enter the Info of " << n << " student" << endl;
            
            for (int i = 0; i < n; i++)
            {
                cout << "name " << i+1 << " = ";
                cin >> name[i];
                cout << "age " << i+1 << " = ";
                cin >> age[i];
                cout << "standard " << i+1 << " = ";
                cin >> standard[i];

                this->name[i] = name[i];
                this->age[i] = age[i];
                this->standard[i] = standard[i];
            }
        }
};

class disp : public Info
{
public:
    void display()
    {
        // int x = n - 3;
        cout << "\n\nThe Info the student " << endl;
        for (int i = 0; i < n; i++)
        {
            cout<<endl;
            cout << "Name : " << name[i] << endl;
            cout << "Age : " << age[i] << endl;
            cout << "Standard : " << standard[i] << endl;
        }
    }
};
class disp1 : public Info
{
public:
    void display1()
    {   
        // I don't know what to do here, 
        // complete here over to kta hoo
        // HUNTER && AAYUSH
    }
};

int main()
{
    system("clear");
    disp d;
    d.input();
    d.display();
    // disp1 D;
    // D.display1();

    return 0;
}