// Write a program with class Fibo to realize following code snippet.

#include<iostream>
using namespace std;

class Fibo {
    private :
        int a, b, c;
    public :
        Fibo (int num) {         // 0       1         -1
            a = -1;
            b = num;
            c = 0;
        }
        Fibo operator ++ () {
            a = b;
            b = c;
            c = a+b;
            return c;
        }
        void display () {
            cout<<c<<"  ";
        }
};
int main () {
    int i;
    Fibo f = 1;
    for (i=1; i<=10; i++){
        ++f;
        f.display();
    }
    return 0;
}