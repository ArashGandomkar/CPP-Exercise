#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

enum months {FAR=1,ORD,KHR,TIR,MRD,SHR,MHR,ABN,AZR,DAY,BHN,ESF};
int main()
{
    months m;
    string a[] = {"FARVARDIN","ORDIBEHESH","KHORDAD","TIR","MORDAD","SHAHRIVAR","MEHR",
    "ABAN","AZAR","DEY","BAHMAN","ESFAND"};
    /*char *MonthNames[] = {"","FARVARDIN","ORDIBEHESH","KHORDAD","TIR","MORDAD","SHAHRIVAR","MEHR",
    "ABAN","AZAR","DEY","BAHMAN","ESFAND"};*/
    for (m = FAR; m < ESF;m++)
    {
        printf("%d %s\n\n",m,a[m]);
    }  
}
//ArashGk