#include <iostream>
using namespace std;
main()
{
    int array[3];
    for (int idx = 0; idx < 3; idx++)
    {
        cout << "Enter the array :";
        cin >> array[idx];
    }
    int number;
    cout << "Enter the times of even-odd transformation :";
    cin >> number;
    for (int idx = 0; idx < number; idx++)
    {
        for (int idx = 0; idx < 3; idx++)
        {

            if (array[idx] % 2 == 0)
            {

                array[idx] = array[idx] - 2;
            }
            if (array[idx] % 2 != 0)
            {
                array[idx] = array[idx] + 2;
            }
        }
    }
    for (int idx = 0; idx < 3; idx++)
    {
        cout << array[idx] << endl;
    }
}
