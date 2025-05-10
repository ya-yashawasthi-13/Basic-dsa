#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 153;
    int orig = n;
    int sum = 0;
    while (n != 0)
    {
        int dig = n % 10;
        sum = sum +  (dig * dig * dig);
        n = n / 10;
    }
    if (sum == orig)
    {
        cout << "Armstrong number" << endl;
    }
    else
        {
            cout << "Not Amstrong number" << endl;}
}