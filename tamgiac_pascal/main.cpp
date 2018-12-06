#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        a[i][i]=a[i][0]=1;// cai nay la gan cho canh trai hinh tam giac voi canh huyen =1
    }
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<a[i][j];s
        cout<<endl;
    }
    return 0;
}
// bai nay ve tam giac pascal ra la dc
