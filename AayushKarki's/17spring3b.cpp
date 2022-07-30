// create a class named "time" a constructor having hour, minute and second as an arguments is use to take two time data from user. The add function that takes two class objects an arguments adds them respectively then display the aggregragte result ? (Apply 60 secondds =1 mins and 60 mins = 1 hour)
#include <iostream>
using namespace std;
class second; // forward decleration
class first
{
private:
    int h, m, s;

public:
    void input(int hour, int mins, int second)
    {
        h = hour;
        m = mins;
        s = second;
    }
    void disp()
    {
        cout << "hours : " << h << endl
             << "mins: " << m << endl
             << "second : " << s << endl;
    }

    friend void fun(first &f, second &s);
};

class second
{
private:
    int H, M, S;

public:
    void input1(int h, int m, int s)
    {

        H = h;
        M = m;
        S = s;
    }
    void disp()
    {
        cout << "hours : " << H << endl
             << "mins: " << M << endl
             << "second : " << S << endl;
    }

    friend void fun(first &f, second &s);
};

void fun(first &f, second &s)
{
    int sh, sm, ss;
    sh = f.h + s.H;
    sm = f.m + s.M;
    ss = f.s + s.S;
    cout << "The sum of hours of two class : " << sh << endl;
    cout << "The sum of mins of two class : " << sm << endl;
    cout << "The sum of secs of two class : " << ss << endl;
}

int main()
{
    first f;
    f.input(1, 2, 3);
    second s;
    s.input1(3, 4, 5);
    f.disp();
    s.disp();
    fun(f, s);
}