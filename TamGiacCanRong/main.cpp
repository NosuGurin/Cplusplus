#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<endl;
        for(int j=1;j<n;j++)
        {
            if(i+j==n+1 || i==n)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            if(j==i || i==n)
                cout<<"*";
            else
                cout<<" ";
        }
    }
}
