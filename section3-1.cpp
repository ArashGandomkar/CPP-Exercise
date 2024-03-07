#include <iostream>
#include <vector>
#include <string>
using namespace std;
int print(int a);
int array(int b);
void matrix1();
void matrix2();
void matrix3();
void survey();
void contact();
int main()
{
    int in,in1,in2;
    cout << "[1]Print Number" << endl;
    cout << "[2]Build an Array" << endl;
    cout << "[3]Make (3*4)Matrix" << endl;
    cout << "[4]Print available (3*4)Matrix" << endl;
    cout << "[5]Print areas above the main diameter of the (4*4)Matrix" << endl;
    cout << "[6]Do All\t";
    cout << "[7]Contact\t\t";
    cout << "[8]Exit";
    cout << endl << endl << "Choose one of the above cases: ";
    cin >> in2;
switch (in2)
{
case 1:
        cout << endl << "[1]Print Number" << endl;
        cout << "Please enter your Input: ";
        cin >> in;
        print(in);
        survey();
        break;
case 2:
        cout << endl << "[2]Build an Array" << endl;
        cout << "Please enter number of Array's Index: ";
        cin >> in1;
        array(in1);
        survey();
        break;
case 3:
        cout << endl << "[3]Make (3*4)Matrix" << endl;
        matrix1();
        survey();
        break;
case 4:
        cout << endl << "[4]Print available (3*4)Matrix" << endl;
        matrix2();
        survey();
        break;
case 5:
        cout << endl <<"[5]Print areas above the main diameter of the (4*4)Matrix" << endl;
        matrix3();
        survey();
        break;
case 6:
        cout << endl << "[6]Do All" << endl;

        cout << endl << "[1]Print Number" << endl;
        cout << "Please enter your Input: ";
        cin >> in;
        print(in);

        cout << endl << "[2]Build an Array" << endl;
        cout << "Please enter Number of Array's Index: ";
        cin >> in1;
        array(in1);

        cout << endl << "[3]Make (3*4)Matrix" << endl;
        matrix1();

        cout << endl << "[4]Print available (3*4)Matrix" << endl;
        matrix2();

        cout << endl << "[5]Print areas above the main diameter of the (4*4)Matrix" << endl;
        matrix3();
        survey();
        break;

case 7: 
        cout << endl << "[7]Contact" << endl;
        contact();
        break;

                case 8: break;

        default: main();
    }
}

//PrintFunc

int print(int a)
{
    cout << "Your Number is: " << a << "." << endl;
    return 0;
}

//Build an Array

int array(int b)
{
   int chs;
   int sugg;
   int index = b+1;
   int array[index];
   array[0] = 0;
   cout << "Enter " << b << " index: ";
   for (int i = 1; i < index; i++)
   {
   cin >> sugg;
   array[i] = sugg;
   }
   cout << "The Array is: " << "\" ";
   for (int i = 1; i <= b; i++) {cout << array[i] << " ";}
   cout << "\"";
   cout << endl << "Choose one index from ";
   for (int k=1;k<=b;k++) {cout << k;if(k<b){cout << ",";}}
   cout << ": ";
   cin >> chs;
   cout << "The value of index " << chs << " is " << array[chs] << "." << endl;
   return 0;
}

//Print (3*4)Matrix

void matrix1()
{

    //(With taking input from the user)

    cout << "Enter 12 index: ";
    int array1[3][4];
    for (int i=0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
        cin >> array1[i][j];
        }
    }
    cout << "The Array's elements(3*4) is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j=0;j<4;j++)
        {
        cout << array1[i][j] << " ";
        if (j==3) {cout << endl;}
        }
    }
}

//Print (3*4)Matrix

void matrix2()
{
    
   //(Without taking input from the user)

    int array1[3][4] =
     {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
     };
    for (int i=0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array1[i][j] << " ";
            if (j==3) {cout << endl;}
            if (i==0 && (j==1 || j==2)) {cout << " ";}
            if (i==1 && (j==1 || j==2)) {cout << " ";}
        }
    }
}

//Print areas above the main diameter of the (4*4)Matrix

void matrix3()
{
    cout << "Enter 16 index: ";
    int array2[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
        cin >> array2[i][j];
        }
    }
    cout << "The Array's element(3*4) is:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j=0;j<4;j++)
        {
        cout << array2[i][j] << " ";
        if (j==3) {cout << endl;}
        }
    }
    cout << endl;
    cout << "The areas above the main diameter of the (4*4)Matrix:" << endl;
    cout << array2[0][1] << " ";
    cout << array2[1][2] << " ";
    cout << array2[2][3] << " ";
}

//Contact

void contact()
{
    cout << "You can contact me by Email(arashgkuni@gmail.com)..." << endl;
}

//Survey

void survey()
{
    string answer;
    cout << endl << "Are you interested?(YES/NO) ";
    cin >> answer;
    if (answer == "Yes" || answer == "YES" ||  answer == "yes") {cout << "Good Luck...";}
    if (answer == "No" || answer == "NO" ||  answer == "no") {cout << "You can contact me by Email(arashgkuni@gmail.com)..." << endl;}
}