/*It is a special function that reduces the function overhead call by copying the content of the of the function in just 1 line and pasting it in the main method. Rather than command its a request to the compiler to make a function inline and the compiler can accept and reject the request. Inline keyword is used infront of the fun name to make it an inline.It reduces the time complexity reducing the searching work of the compiler.

When the function length is large and when we do recursive function call then the compiler rejects the inline request*/

#include <iostream>
#include <string>
using namespace std;
class based
{
public:
    inline void method()
    {
        cout << "Hello, its the demo of inline function" << endl;
    }
};

int main()
{
    system("clear");
    base b;
    b.method();
    return 0;
}

/*
#include <iostream>
using namespace std;

inline void fun()
{
    int a, b, c;
    cout << "Enter 3 numbers" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "largest num = " << a << endl;

    else if (b > c)
        cout << "largest num = " << b << endl;

    else
        cout << "largest num = " << c << endl;
}

int main()
{
    system("clear");
    fun();
    return 0;
}*/