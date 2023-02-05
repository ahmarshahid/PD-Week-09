#include <iostream>
using namespace std;
main()
{
    int price = 500;
    string movie[5] = {"Gladiator", "Starwars", "Terminator", "Taking", "TombRider"};
    string moviename;
    cout << "Enter the name of the movie :";
    cin >> moviename;
    int amount = 0;
    for (int idx = 0; idx < 5; idx++)
    {
        if (moviename == movie[idx])
        {
            if (idx % 2 == 0)
            {
                amount = price * 0.9;
            }
            else
            {
                amount = price * 0.95;
            }
        }
    }
    cout << amount;
}
