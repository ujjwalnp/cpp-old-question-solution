// copy constructor make the initial source value null
#include <iostream>
using namespace std;
class base
{
private:
  int age, rollnum, ummer, hajirNumber;

public:
  base(int a, int r)
  {
    age = a;
    rollnum = r;
  }

  void show()
  {
    cout << "The info of the student is : " << endl;
    cout << "Age : " << age << endl
         << "Roll num : " << rollnum << endl;
  }

  void showdata()
  {
    cout << "rollnum : " << rollnum << endl
         << "Age : " << age << endl
         << "Ummer : " << ummer << endl
         << "hajirNumber : " << hajirNumber << endl;
  }

  base(base &t)
  {
    ummer = t.age;
    hajirNumber = t.rollnum;
  }
};

int main()
{
  base b(21, 33);
  b.show();
  cout << "The work of copy construct is started " << endl;
  base b1(b);
  b1.showdata();
}
