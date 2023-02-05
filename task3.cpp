#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter the name :";
    getline(cin, name);
    if( name.length() %2 ==0 )
    {
        cout << "true";
    }
    else {
        cout << "false";
    }
    
}