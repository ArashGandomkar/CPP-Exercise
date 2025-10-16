#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class Nameesarray
{
    private:
    int x[2];
    char names[2][10];

    public:
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << endl << "Num" << i+1 << ": " << names[i];
        }
        
    }
    void setnames(char [2][10]);
    void setnum(int b[2])
    {
        for (int i = 0; i < 2; i++)
        {
            x[i]=b[i];
        }
        
    }
    
};
    void Nameesarray::setnames(char a[2][10])
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                names[i][j]=a[i][j];
            }
            
        }
        
    }
main()
{
    int x[2]={1,2};
    char y[2][10];
    for (int i = 0; i < 2; i++)
    {
        cout << "Name" << i+1 << ": ";
        cin.getline(y[i],10);
    }
    
    Nameesarray obj1;
    obj1.setnum(x);
    obj1.setnames(y);
    obj1.display();
    getch();
}