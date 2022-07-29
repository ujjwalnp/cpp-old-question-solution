#include<iostream>
using namespace std;
class oop{
    public:
    int a,b;
    oop(int x, int y){
        a=x;b=y;
    }
    void show()
    {
        cout<<a<<endl<<b<<endl;
    }

    void operator -(){
        a=-a;
        b=-b;
    }
};

int main(){
    oop o(2,3);
    o.show();
    -o;
    o.show();
}