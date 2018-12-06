#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream y;
    ofstream o;
    y.open("BAI2.INP");
    o.open("BAI2.OUT");
    int n,a[30000];
    cin>>n;
    bool a[n] = {1};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    y.close();
    o.close();
}
