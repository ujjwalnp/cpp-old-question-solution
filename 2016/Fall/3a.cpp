// done by ankit
// Question : 

//2016_fall_3a
#include<bits/stdc++.h>
using namespace std;
class Class2;
class Class1
 {
        private:
        int num1;
        public:
        void setvalue()
        {
            cout<<"Enter a  number :";
            cin>>num1;
            cout<<"Num1 :"<<num1<<endl;
        }
        friend void max(Class1 object1,Class2 object2);
 };
class Class2
{
        private:
        int num2;
        public:
        void setvalue()
        {
            cout<<"Enter a  number :";
            cin>>num2;
            cout<<"Num2 :"<<num2<<endl;
        }
            friend void max(Class1 object1,Class2 object2);
};
void max(Class1 object1,Class2 object2){
if(object1.num1>object2.num2){
    cout<<object1.num1<<" "<<"is maximum number.";
}
else{
    cout<<object2.num2<<" "<<"is maximum number.";
}

    
}
int main()
{
    Class1 c1;
    Class2 c2;
    c1.setvalue();
    c2.setvalue();
    max(c1,c2);
    return 0;
}
