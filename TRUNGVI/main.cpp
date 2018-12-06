#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int a[99][99];
int N;
vector<int> dayso;
vector<int> dayso1;

int main()
{
    ifstream y;
    ofstream o;
    y.open("TRUNGVI.INP");
    o.open("TRUNGVI.OUT");
    y>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            y>>a[i][j];
            dayso.push_back(a[i][j]);
        }
        sort(dayso.begin(),dayso.end());
        dayso1.push_back(dayso[N/2]);
        dayso.clear();
    }

    sort(dayso1.begin(),dayso1.end());

    o<<dayso1[N/2]<<endl;
    y.close();
    o.close();

}

/*
#include <iostream>
#include <fstream>
#include <algorithm>
#define MAX 1000
using namespace std;

int A[MAX][MAX];
int B[MAX];
int n;

/*void nhap()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
}

void xuat()
{
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j];
        }
    }
}

int hoanvi(int &a,int &b)
{
    int tam=0;
    tam=a;
    a=b;
    b=tam;
}
int main()
{

    ifstream y;
    ofstream o;

    y.open("So_Trung_Vi.INP");
    o.open("So_Trung_Vi.OUT");
    y>>n;
    //if(n<3 && n > 99 && n%2==0)
    //{
    // cout<<"nhap lai:";
    //    cin>>n;
    //}
    //else
    //{
        //nhap();
        //xuat();
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            y>>A[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j];
        }
    }
        for(int i=0;i<n*n;i++)
        {
            for(int j=0;j<n*n;j++)
            {
                if(A[i/n][i%n]< A[j/n][j%n])
                        hoanvi(A[i/n][i%n],A[j/n][j%n]);
            }
        }
        //cout<<endl;
        //xuat();
        for(int i=0;i<n;i++)
        {
            B[i]=A[i][n/2];
        }
        sort(B,B+n);
        o<<B[n/2]<<endl;
   // }

    y.close();
    o.close();
}*/





