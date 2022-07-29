// Wap to illustrate the composition of the object in cpp
#include <iostream>
#include <string>
using namespace std;
class processorinfo
{
public:
    string processor;
    int processorSpeed;
    void getInfo()
    {
        cout << "enter the name of the processor and its max clock speed " << endl;
        cin >> processor >> processorSpeed;
    }

    void displayInfo()
    {
        cout << "processor : " << processor << endl
             << "processor speed : " << processorSpeed << endl;
    }
};
class pcInfo
{
public:
    processorinfo p;
    string pcName;
    float price;
    void getPcInfo()
    {
        cout << "Enter the name of the pc, its cost" << endl;
        cin >> pcName >> price;
        p.getInfo();
    }

    void displayPcInfo()
    {
        cout << "\nAll of the info of pc " << endl;
        cout << "Name : " << pcName << endl
             << "Price : " << price << endl;
        p.displayInfo();
    }
};

int main()
{
    pcInfo pc;
    pc.getPcInfo();
    pc.displayPcInfo();
}