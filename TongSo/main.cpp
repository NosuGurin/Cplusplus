#include <iostream>
#include <algorithm>
#include <fstream>


using namespace std;




int main()
{
    ifstream y;
    ofstream o;
    y.open("TONGSO.INP");
    o.open("TONGSO.OUT");
    int n,a[20000],b;
    y>>n>>b;
    for(int i=0;i<n;i++)
    {
        y>>a[i];
    }
    sort(a,a+n);

    int tong;
    int demmin=20000;
    int dem;
    for(int i=0;i<n-1;i++)
    {
        tong = a[i];

        dem = 1;
        for(int j=i+1;j<n;j++)
        {

            if(tong < b)
            {
                tong += a[j];
                dem++;
            }
            if(tong >= b)
            {
                if(dem < demmin)
                    demmin = dem;


            }
        }
    }

    o<<demmin;

}
