#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    string name, authName, publication;
    float price;
    int pages;
    void input()
    {
        cout << "Enter the book name, author name, publication, price and total num of pages of the book " << endl;
        cin >> name >> authName >> publication >> price >> pages;
    }

    void output()
    {
        cout << "The name of the book is : " << name << endl
             << "Author name is : " << authName << endl
             << "Name of the publication is : " << publication << endl
             << "Price of the book is : " << price << endl
             << "Total num of pages in the book is : " << pages << endl
             << endl;
    }
};

int main()
{
    system("clear");
    int n;
    cout << "How many books info you wanna store : ";
    cin >> n;
    base b[n];
    for (int i = 0; i < n; i++)
    {
        b[i].input();
        b[i].output();
    }
    return 0;
}