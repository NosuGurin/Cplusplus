#include <iostream>

using namespace std;

/*int main() // khong de quy
{
    int a,b,r;
    cin>>a>>b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cout<<a;
    return 0;
}*/
int ucln(int a,int b) // de quy
{
    if(a%b!=0) return ucln(b,a%b);
    else
        return b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<ucln(a,b);

    return 0;
}
