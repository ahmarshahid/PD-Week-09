#include <iostream>
using namespace std;
main()
{
string fruit[4] = {"peach", "apple", "guava", "watermelon" };
int price[4] = {60, 70, 40, 30};
string name;
int quantity;
cout << "Enter the name of fruit : ";
cin >> name;
cout << "Enter the quantity of fruit :";
cin >> quantity;
int amount=0;
for(int idx =0; idx <5 ; idx++)
{
if(name == fruit[idx] )
{
 amount = quantity*price[idx];
}
}
cout << "The total price is :" << amount ;






}