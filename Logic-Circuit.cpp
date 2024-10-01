#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
string ChangeBase(double, double);
string ChangeBaseDecimal(double, double);
double ChangeBaseTen(double, double);
double ChangeBaseTenDecimal(double, double);
string DisplayHexDigit(string);
main()
{

    double digit, base1, base2;
    cout << "Enter a Digit: ";
    cin >> digit;
    cout << "Enter a base 1: ";
    cin >> base1;
    cout << "Enter a base 2: ";
    cin >> base2;
    if (base1 == 2 && base2 == 16)
    {
        stringstream Digit_Base2;
        Digit_Base2 << digit;
        string NewDigit_Base2 = Digit_Base2.str();
        cout << DisplayHexDigit(NewDigit_Base2) << endl;
    }
    else if (base1 == 10)
    {
        if (base2 == 16)
        {
            if (int(digit) >= 1 && (digit - floor(digit)) == 0)
            {
                stringstream Digit_Base2;
                double b2 = 2.0;
                Digit_Base2 << ChangeBase(digit, b2);
                string NewDigit_Base2 = Digit_Base2.str();
                cout << DisplayHexDigit(NewDigit_Base2) << endl;
            }
            else
            {
                cout << "Please enter integer number." << endl;
            }
        }
        else if (int(digit) > 0 && (digit - floor(digit)) > 0)
        {
            cout << ChangeBase(digit, base2) << "." << ChangeBaseDecimal(digit, base2) << endl;
        }
        else if (int(digit) >= 1 && (digit - floor(digit)) == 0)
        {
            cout << ChangeBase(digit, base2) << endl;
        }
        else if (int(digit) == 0 && (digit - floor(digit)) != 0)
        {
            cout << "0." << ChangeBaseDecimal(digit, base2) << endl;
        }
    }
    else if (base1 != 10)
    {
        if (base2 == 16)
        {
            if (int(digit) >= 1 && (digit - floor(digit)) == 0)
            {
                stringstream Digit_Base2;
                double b2 = 2.0;
                Digit_Base2 << ChangeBase(digit, b2);
                string NewDigit_Base2 = Digit_Base2.str();
                cout << DisplayHexDigit(NewDigit_Base2) << endl;
            }
            else
            {
                cout << "Please enter integer number." << endl;
            }
        }
        else if (int(digit) > 0 && (digit - floor(digit)) > 0)
        {
            double NewDigit = ChangeBaseTen(digit, base1);
            double NewDecimalDigit = ChangeBaseTenDecimal(digit, base1);
            cout << ChangeBase(NewDigit, base2) << "." << ChangeBaseDecimal(NewDecimalDigit, base2) << endl;
        }
        else if (int(digit) >= 1 && (digit - floor(digit)) == 0)
        {
            double NewDigit = ChangeBaseTen(digit, base1);
            cout << ChangeBase(NewDigit, base2) << endl;
        }
        else if (int(digit) == 0 && (digit - floor(digit)) != 0)
        {
            double NewDecimalDigit = ChangeBaseTenDecimal(digit, base1);
            cout << "0." << ChangeBaseDecimal(NewDecimalDigit, base2) << endl;
        }
    }
}
int retro(int, int);
int push(int, int, int);
// A Function that change base(Digit), whitch has base 10
string ChangeBase(double digit, double Base)
{
    ostringstream vectortoString;
    int chance;
    int NewDigit = static_cast<int>(digit);
    int NewBase = static_cast<int>(Base);
    vector<int> Final;
    chance = retro(NewDigit, Base);
    Final.push_back(push(NewDigit, Base, chance));

    for (int i = 0; i <= chance; i++)
    {
        int test = NewDigit % NewBase;
        NewDigit /= Base;
        Final.push_back(test);
    }
    for (int num = Final.size() - 1; num > 0; num--)
    {
        vectortoString << Final[num];
    }
    return vectortoString.str();
}
// A Function that change base(DecimalDigit), whitch has base 10
string ChangeBaseDecimal(double digit, double base)
{
    ostringstream vectortoString;
    vector<int> Final;
    if (digit > 1)
    {
        double DecimalDigit = digit - floor(digit);

        for (int i = 0; i < 8; i++)
        {
            DecimalDigit *= base;
            Final.push_back(int(DecimalDigit));
            DecimalDigit = DecimalDigit - floor(DecimalDigit);
            if (DecimalDigit == 0)
            {
                break;
            }
        }
    }
    else if (digit > 0 && digit < 1)
    {
        for (int i = 0; i < 8; i++)
        {
            digit *= base;
            Final.push_back(int(digit));
            digit = digit - floor(digit);
            if (digit == 0)
            {
                break;
            }
        }
    }
    for (size_t i = 0; i < Final.size(); i++)
    {
        vectortoString << Final[i];
    }
    return vectortoString.str();
}
// A Function that change base(Digit), whitch doesn't have base 10
double ChangeBaseTen(double digit, double base)
{
    int NewDigit = static_cast<int>(digit);
    int NewBase = static_cast<int>(base);
    vector<int> Final;
    while (NewDigit >= 1)
    {
        int mod = NewDigit % 10;
        Final.push_back(mod);
        NewDigit /= 10;
    }
    double FinalDigit = 0;
    for (size_t i = 0; i < Final.size(); i++)
    {
        FinalDigit += pow(NewBase, i) * Final[i];
    }
    return FinalDigit;
}
// A Function that change base(DecimalDigit), whitch doesn't have base 10
double ChangeBaseTenDecimal(double digit, double base)
{
    digit -= floor(digit);
    vector<int> Final;
    ostringstream vectortostring;
    vectortostring << digit;
    string str_number = vectortostring.str();
    for (char ch : str_number)
    {
        if (ch >= '0' && ch <= '9')
        {
            Final.push_back(ch - '0');
        }
    }
    vector<int> NewDigit;
    for (size_t i = 1; i < Final.size(); i++)
    {
        NewDigit.push_back(Final[i]);
    }
    int a = -1;
    double answer = 0;
    for (int num : NewDigit)
    {
        answer += pow(base, a) * num;
        a--;
    }
    return answer;
}
// Convert a group of 4-bits to HexDigit
char binaryToHexDigit(string binary)
{
    int decimal = 0;
    //Convert char to inteager ((*2 == pow) + (Char-'0' == Digit))
    for (size_t i = 0; i < binary.size(); ++i)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    if (decimal < 10)
    {
        return decimal + '0';
    }
    else
    {
        //Return (A-B-C-D-E-F)
        return decimal - 10 + 'A';
    }
}
// Covert BinaryDigit to HexDigit
string binaryToHex(string binary)
{
    string hex = "";
    //Add zero to the digit until its length is divisible by 4
    while (binary.size() % 4 != 0)
    {
        binary = '0' + binary;
    }
    // Convert every 4-bits(With substr()Function) to HexDigit
    for (size_t i = 0; i < binary.size(); i += 4)
    {
        string fourBits = binary.substr(i, 4);
        hex += binaryToHexDigit(fourBits);
    }
    return hex;
}
// A Function that returns the HexDigit
string DisplayHexDigit(string binary)
{

    string hexInteger = binaryToHex(binary);
    return hexInteger;
}
// A Function that returns the number of divisions
int retro(int digit, int base)
{
    int retro = 0;
    while (digit >= base)
    {
        digit /= base;
        retro++;
    }
    return retro;
}
// A Function that returns the last ration
int push(int digit, int base, int chance)
{

    for (int i = 0; i < chance; i++)
    {
        digit /= base;
    }
    return digit;
}