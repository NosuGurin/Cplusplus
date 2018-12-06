#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;


bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    ifstream y;
    ofstream o;
    y.open("BAI1.INP");
    o.open("BAI1.OUT");
    int n,a[30000];
    y>>n;
    for(int i=0;i<n;i++)
    {
        y>>a[i];
    }
    sort(a,a+n,comp);
    //for(int i=0;i<n;i++)
    //{
    //    cout<<a[i]<<" ";
    //}
    if((a[n-1]*a[n-2]*a[0]) < a[0]*a[1]*a[2])
        o<<a[0]*a[1]*a[2];
    else
        o<<a[n-1]*a[n-2]*a[0];
    y.close();
    o.close();
}
