#include<iostream>
using namespace std;

int main()
{
    int n,r = 0;
    cin >> n;
    cout << n << endl;

    int h;
    h = n / 100;
    cout << h << " nota(s) de R$ 100,00" <<endl;

    int f;
    r = n % 100;
    f = r / 50;
    cout << f << " nota(s) de R$ 50,00" <<endl;

    int t;
    r = r % 50;
    t = r / 20;
    cout << t << " nota(s) de R$ 20,00" <<endl;

    int ten;
    r = r % 20;
    ten = r / 10;
    cout << ten << " nota(s) de R$ 10,00" <<endl;

    int five;
    r = r % 10;
    five = r / 5;
    cout << five << " nota(s) de R$ 5,00" <<endl;

    int two;
    r = r % 5;
    two = r / 2;
    cout << two << " nota(s) de R$ 2,00" <<endl;

    int one;
    r = r % 2;
    one = r / 1;
    cout << one << " nota(s) de R$ 1,00" <<endl;



    
    return 0;
}