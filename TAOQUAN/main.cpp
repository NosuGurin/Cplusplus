#include <iostream>

using namespace std;

int main()
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        int tam1 = (n+m-k)/3;
        int tam2 = n/2;
        int kq=0;
        if(tam2 < m)
        {
            kq = (tam1 < tam2)?tam1:tam2;
        }
        else
        {
            kq = (m < tam1)?m:tam1;
        }
        cout<<kq;
    }
}
