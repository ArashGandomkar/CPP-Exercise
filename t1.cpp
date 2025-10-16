#include <iostream>
#include <stdio.h>
#include <ctime>
#include <conio.h>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0)));;
    while(true) {
    int wallet;
    wallet = rand();
    cout << wallet << endl;
    getch();
}
return 0;
}