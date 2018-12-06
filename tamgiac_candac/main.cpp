#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<2*n;j++)
        {
            if(j>=(n-i) && j<=(n+i))
                cout<<"*";
            else
                cout<<" ";
        }
    }
    return 0;
}
