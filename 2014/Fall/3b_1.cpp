// done by aayush
// for question refer another file 3b or refer question bank

#include <iostream>
using namespace std;
class nm
{
public:
    string name = "mike ";
};
class ad
{
public:
    string address = "manchester";
    nm n;
    string concatenated = n.name + address;
};
int main()
{
    nm N;
    ad A;
    cout << "string 1 : " << N.name << endl;
    cout << "string 2 : " << A.address << endl;
    cout << "Concantenated string : " << A.concatenated << endl;
}