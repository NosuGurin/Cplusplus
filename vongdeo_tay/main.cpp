#include <iostream>

using namespace std;

int main()
{
    int n,t,p;
    cin>>n;


    if((n/7)%2==0) // bat dau thi tay trai co 7 vong;
    {
        t=7;
        p=0;
        for(int i=1;i<=(n%7);i++)
        {
            t-=1;//giam so vong o tay trai
            p+=1;//tang so vong o tay phai

        }
        cout<<t<<" "<<p;
    }
    if((n/7)%2!=0)
    {
        t=0;
        p=7;
        for(int i=1;i<=(n%7);i++)
        {
            t+=1;//tang so vong o tay trai
            p-=1;//giam so vong o tay phai
        }
        cout<<t<<" "<<p;
    }

     return 0;
}
