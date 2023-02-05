#include <iostream>
using namespace std;
main()
{
    string array[4];
    bool flag = false;
    for (int idx = 0; idx < 4; idx++)
    {
        cout << "Enter element of array :";
        cin >> array[idx];
    }
    if (array[0] == array[1] && array[1] == array[2] && array[2] == array[3] && array[0] == array[3])
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    if (flag == true)
    {
        cout << "True";
    }
    else if (flag == false)
    {
        cout << "False";
    }
}
