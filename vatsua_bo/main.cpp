#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int s=0;
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]-t>0) s+=(a[i]-t);
        t++; // day la so luong sua moi lan vat thi cac con bo con lai bi giam xuong 1 lit
    }
    cout<<s<<endl;
    return 0;
}
