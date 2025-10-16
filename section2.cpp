#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //int a[10] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> a = {0,1,2,3,4,5,6,7,8,9};
    for (int i : a)
    {
        int s = i%2;
        if (s==0)
        {
            cout<< i << " is even." << endl;
        }
        else
        {
            cout << i << " is odd." << endl;
        }
        
    }
    
}