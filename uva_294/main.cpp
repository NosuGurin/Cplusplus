#include<iostream>

using namespace std;

int demsouoc(int x)
{
    int dem=0;
    for(int i=1;i<=x/2;i++)
    {
        if(x%i==0)
            dem++;
    }

        return dem+1; // ly do cong them 1 la vi se thieu uoc so 1;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l,u;
        int souocmax =0;
        int socouocmax = 0;
        cin>>l>>u;
        for(int j=l;j<=u;j++)
        {
            int tam=demsouoc(j);

            if(tam>souocmax)
            {
                 souocmax=tam;
                 socouocmax=j;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<" , "<<socouocmax<<" has a maximum of "<<souocmax<<" divisors.";
    }


    return 0;
}
