#include <iostream>
using namespace std;


class she{
    private:
    char name[50];
    int no;

    public:
    void input(){
        cout<<"Name : ";
        cin>>name;
        cout<<"no : ";
        cin>>no;
        
        }
    friend void he(she obj1, she obj2);
};
void he(she obj1,she obj2){
    cout<<"\nObject 1 :: name is:"<<obj1.name<<endl<<"no is:"<<obj1.no<<endl;
    cout<<"\nObject 2 :: name is:"<<obj2.name<<endl<<"no is:"<<obj2.no<<endl;
}

int main() {
   she p;
   p.input();
   she q;
   q.input();
   he(p,q);

    return 0;
}