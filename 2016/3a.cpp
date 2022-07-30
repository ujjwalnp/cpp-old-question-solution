#include <iostream>
using namespace std;
class class2;
class class1
{
private:
int x;
public:
void setvalue (int num)
{
x=num ;
}
friend void max (class1, class2);
};
class class2
{
private:
int y ;
public:
void setvalue(int num)
{
y=num ;
}
friend void max(class1, class2) ;
};
void max(class1 m, class2 n)
{
if (m.x>=n.y)
cout<<"Maximum value="<<m.x ;
else
cout<<"Maximum value="<<n.y<<endl;
}
int main( )
{
class1 p;
class2 q;
p.setvalue(10) ;
q.setvalue(20) ;
max(p, q);
return 0;
}
