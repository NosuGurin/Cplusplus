#include <iostream>

using namespace std;

int main()
{
    int n,a[200000];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            int tam = a[i];
            for(int j=i+1;j<n;j++)
            {
                tam+=a[j];
                if(sum < tam)
                    sum = tam;
            }
        }
        cout<<sum<<endl;
    }
}
