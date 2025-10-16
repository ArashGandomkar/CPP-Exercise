#include <iostream>

using namespace std;

int main()
{
    int i;
    int d = i % 3;
    for (int l = 0; l < 3;l++)
    {
         cout << "Please enter your number:";
         cin >> i;
        if (i % 3 == 0)
        {
            cout << i << " is divisible." << endl;
        }
        else if (i % 3 != 0)
        {
            cout << i << " is undivisible." << endl;
            cout << "The reminder is " << d << "." << endl;
        }
    }
}