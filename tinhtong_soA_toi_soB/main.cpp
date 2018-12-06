#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    int x=floor(a); // lam tron len vd 17.1 thanh 18
    int y=ceil(b); // lam tron xuong vd 17.1 thanh 17
    int s=0;
    for(float i=x;i<=b;i++)
    {
        s+=i;
    }
    cout<<s<<endl;
    return 0;
}
