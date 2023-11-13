#include<iostream>
using namespace std;

int main()
{
   int n,h=0, m = 0, s=0; 
   cin >> n; //getting input;

   h = n/3600; // 1 hour = 3600 sec
   n = n % 3600; 
   m = n / 60; // 1 min = 60 sec
   s = n % 60; // after deviding minut

   cout <<h<<":"<<m<<":"<<s <<endl;// output (h:m:n)

    return 0;
} 

