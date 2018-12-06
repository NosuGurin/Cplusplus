#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i%2!=0) && (j%2!=0)) cout<<"W";
            if((i%2!=0) && (j%2==0)) cout<<"B";
            if((i%2==0) && (j%2!=0)) cout<<"B";
            if((i%2==0) && (j%2==0)) cout<<"W";


        }
        cout<<endl;//het mot dong thi xuong hang
    }

    return 0;
}
