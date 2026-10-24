#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, n;
    i = 1;

    while (i>=1)
    {
        cout << "enter a number to see its multiplication table: " << endl;
        cin >> n;
        i = 1;
        if (n >= 1 && n <= 10)
        {
            
            while (i <= 10)
            {
                cout << n << " * " << i << " = " << n * i << endl;
                i++;
            }
        }
        else
        {
            cout << "Please enter a number between 1 and 10." << endl;
            break;
        }
        
    }

    return 0;
}