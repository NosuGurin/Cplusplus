#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a ,int b)
{
    return a>b;
}
int main()
{
    ifstream y;
    ofstream o;
    y.open("BAI3.INP");
    o.open("BAI3.OUT");
    vector<int> dayso;
    int n,k,a[30000];
    y>>n>>k;

    for(int i=0;i<n;i++)
    {
        y>>a[i];
    }
    sort(a,a+n,comp);
    int tam =0;
    int dau = 0 ;
    while(dau < n)
    {

        if(a[dau] < k)
        {
            tam = k - a[dau];
            dayso.push_back(a[dau]);
            dau = dau;
            break;
        }

        else
            dau++;

    }
    int cuoi = n-1;
    while(cuoi > dau)
    {
        if(a[cuoi] == tam)
        {
            dayso.push_back(a[cuoi]);
            break;
        }
        else
        {
            cuoi--;
        }
    }


    o<<dayso[0]<<" "<<dayso[1]<<endl;
    y.close();
    o.close();
}
