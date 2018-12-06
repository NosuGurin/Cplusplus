#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mid=n/2;
    int tet=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=mid;j++) cout<<"*";
        for(int j=1;j<=n-mid*2;j++) // luc nay mid*2 se nho hon n ban dau vi mid=n chia nguyen cho 2;
            cout<<"D";
        for(int j=1;j<=mid;j++) cout<<"*";
        cout<<endl;
        if(tet==1) mid--; else mid++;//cai nay la giam mid xuong de in ra cai hinh tam giac * o cai hcn ben trong
        //cai nay la tang mid len de in ra * luc giam het mid;
        if(mid==0) tet=0;//cai nay la dinh tam giac

    }

    return 0;
}
