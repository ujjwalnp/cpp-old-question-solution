#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void fun()
{
    cout << "The sum of 10 & 20 is " << 10 + 20;
}

int main()
{
    system("clear");
    auto start = high_resolution_clock::now();

    fun();

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nTime Taken by the function is: " << duration.count() << " Microseconds \n";
    return 0;
}