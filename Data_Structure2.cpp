#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
main()
{
    int size,index;
    cout << "Enter a size of an Array: ";
    cin >> size;
    int array[size];
    srand(time(0));
    for (int i = 0; i < size; i ++)
    {
        array[i] = rand();
        cout << array[i] << " ";
    }
    cout << "\nEnter an index that you want to delete: ";
    cin >> index;
    int* ptr = (int*)malloc((size-1) * sizeof(int));
    for (int i = 0 , j = 0; i < size; i++)
    {
        if (i != index)
        {
            ptr[j++] = array[i];
        }
    }
    for (int i = 0; i < size-1; i++)
    {
        cout << ptr[i] << " ";
    }
}