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
   int index = b;
   vector<int> array;
   vector<int> temp;
   cout << "Enter " << b << " index: ";
   for (int i = 1; i <= index; i++)
   {
   cin >> sugg;
   array.push_back(sugg);
   }
   cout << "The Array is: " << "\" ";
   for (int i = 0; i < b; i++) {cout << array[i] << " ";}
   cout << "\"";
   cout << endl << "Choose one index from ";
   for (int k=1;k<=b;k++) {cout << k;if(k<b){cout << ",";}}
   cout << ": ";
   cin >> chs;
   cout << "The value of index " << chs << " is " << array[chs-1] << "." << endl;
   return 0;
}

//Print (3*4)Matrix

void matrix1()
{

    //(With taking input from the user)

    cout << "Enter 12 index: ";
    vector<vector<int>> arr1;
    vector<int> temp;
    int val;
    for (int i=0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
        cin >> val;
        temp.push_back(val);
        }
    arr1.push_back(temp);
    temp.clear();
    }
    cout << "The Array's elements(3*4) is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j=0;j<4;j++)
        {
        cout << arr1[i][j] << " ";
        if (j==3) {cout << endl;}
        }
    }
}

//Print (3*4)Matrix

void matrix2()
{
    
   //(Without taking input from the user)

    vector<vector<int>> arr1 =
     {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
     };
    for (int i=0;i<3;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr1[i][j] << " ";
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
    vector<vector<int>> arr2;
    vector<int> temp;
    int val;
    for (int i=0;i<4;i++)
    {
        for (int j = 0; j < 4; j++)
        {
        cin >> val;
        temp.push_back(val);
        }
    arr2.push_back(temp);
    temp.clear();
    }
    cout << "The Array's element(3*4) is:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j=0;j<4;j++)
        {
        cout << arr2[i][j] << " ";
        if (j==3) {cout << endl;}
        }
    }
    cout << endl;
    cout << "The areas above the main diameter of the (4*4)Matrix:" << endl;
    cout << arr2[0][1] << " ";
    cout << arr2[1][2] << " ";
    cout << arr2[2][3] << " ";
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
    vector<string> a1 = {"YES","Yes","yes"};
    vector<string> a2 = {"NO","No","no"};
    if (answer==a1[0] || answer==a1[1] || answer==a1[2]) {cout << "Good Luck...";}
    else if (answer==a2[0] || answer==a2[1] || answer==a2[2])
    {cout << "You can contact me by Email(arashgkuni@gmail.com)..." << endl;;}
    else {survey();}
}
    //Produced by ArashGk