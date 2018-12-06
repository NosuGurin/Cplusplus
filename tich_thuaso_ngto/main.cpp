#include<iostream>
#include<math.h>

using namespace std;

int ngtonhonhat(int n)
{
    for(int i=2;i<=n;i++)
        if(n%i==0) return i;
}

void phantich(int n)
{
    int k;
    int danhdau=1;
    while(n>1)
    {

        k=ngtonhonhat(n);
        if(danhdau==1)
        {
            cout<<" "<<k;
            danhdau=0;
        }
        else
            cout<<" x "<<k;
        n=n/k;
    }

}
int main()
{
    int testcase;
    cin>>testcase;

    for(int i=0;i<testcase;i++)
    {
        int n;
        cin>>n;
        if(n>0)
        {
            cout<<n<<"=";
            phantich(n);
        }
        if(n<0)
            cout<<n<<"= -1 x";
            n=n*-1;
            phantich(n);
        if(n==0)
            cout<<" ";
    }
    return 0;
}
