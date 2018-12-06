#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,t,mm;
    cin >> n >> m;
    mm=n;
    t=0;
    while (mm<m)
      {
         mm=round(mm*1.1);
         t++;
      }
      cout << t;
    return 0;
}
