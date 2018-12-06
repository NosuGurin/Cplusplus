#include <iostream>

using namespace std;


int l=0;
int z=0;


int luu2[10000];
int luu[1000];
int ngtonhonhat(int n)
{
    for(int i=2;i<=n;i++)
        if(n%i==0) return i;
}

int phantich(int n)
{
    int k=0;

    while(n>1)
    {

            k=ngtonhonhat(n);
            cout<<k<<" ";
            luu2[l++]=k;
            n=n/k;

    }
}



int main()
{
    int a,b;

    while(cin>>a>>b)
    {

        if(a<0 || b<0 || b%a!=0)
            cout<<-1<<endl;
        else
        {
             phantich(b);
            cout<<endl<<endl;
             int kq=0;
             int tam=a;
              for(int i=0;i<l;i++)
              {
                  kq=tam*luu2[i];
                  if(kq<b)
                  {

                      luu[z++]=kq;

                      tam=kq;
                  }


              }
              int tong=0;
                for(int i=0;i<z;i++)
                {
                    tong+=luu[i];
                }
            cout<<z+2<<" "<<tong+a+b<<endl;
        }
    }
}
