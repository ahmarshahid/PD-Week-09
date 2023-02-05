#include <iostream>
using namespace std;
main()
{
    bool flag = false;
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter the number of array :";
        cin >> array[idx];
    }
    for (int idx = 0; idx <= size; idx++)
    {
        if (array[idx] % 10 == 7)
        {
            flag = true;
            break;
        }
        else 
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "Boom!";
    }
    else if (flag == false)
    {
        cout << "There is no 7 in the array";
    }
}