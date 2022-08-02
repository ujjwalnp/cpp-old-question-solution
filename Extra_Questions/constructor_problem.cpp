// Class "Y" has been derived from class "X". The class "Y" doesn't contain any data member of its own. Does class "Y" require constructor? If yes, why?

#include<iostream>
using namespace std;

class X {
    protected : 
        int x, y;

    public :
        void display() {
            cout<<"Hello I'm Class X";
        }
};
class Y : public X {

};
int main() {
    Y y;
    y.display();
    
    return 0;
}