#include <iostream>
using namespace std;

int main()
{
    int i, t;

    cin >> t;
    for (i = 0; i < t; i++)
    {
        int a, b;

        cin >> a >> b;

        int div = a % b;

        if (div == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - div << endl;
        }
    }

    return 0;
}