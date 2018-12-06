/*dua theo cau tho :
   Tram trau tram co
    Trau dung an nam
    Trau nam an ba
    Lum khum trau gia
    Ba con mot bo

    ta duoc mot he phuong trinh:
    x+y+z=100; 100 la so trau
    5x+3y+z/3=100; z/3 la do ba con mot bo
*/

#include<bits/stdc++.h>

using namespace std;

int x,y,z,sotrau,sobo_co;

int main()
{
    cin >> sotrau >> sobo_co;
    for(x=1;x<=sotrau;x++)
        for(y=1;y<=sotrau;y++)
            for(z=1;z<=sotrau;z++)
                if ((x+y+z==sotrau)&(((x*5)+(y*3)+(z/3))==sobo_co)&&(z%3==0)) //  ly do tinh ra gia tri la so nguyen nen
                    //phai chia het
                    {
                        cout << x << " " << y << " " << z;
                        return 0;
                    }
    cout << "-1";
}
