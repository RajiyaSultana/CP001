#include <iostream>
using namespace std;

int main()
{
    int i, t;
    cin >> t;

    for (i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        if (n == 1 && n == 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (n - 1) / 2 << endl;
        }
    }
    return 0;
}