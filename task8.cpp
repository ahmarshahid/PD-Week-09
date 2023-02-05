#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array :";
    cin >> size;
    string array[size];
    int totalcolourtime = 0;
    int changepencil = 0;
    int totaltime = 0;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter the elements of array :";
        cin >> array[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        totalcolourtime = size * 2;
    }
    for (int idx = 0; idx < size; idx++)
    {
        if (array[idx] == array[idx - 1])
        {
            changepencil = 1;
        }
        else
        {
            changepencil = size - 1;
        }
    }
    totaltime = totalcolourtime + changepencil;
    cout << "The total required time is :" << totaltime << " seconds" ;
}