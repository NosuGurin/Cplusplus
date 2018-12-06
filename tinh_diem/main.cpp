#include <iostream>
#include <string>>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int tong=0;
    int tam=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='C')
        {
            tam++;
            tong+=tam;
        }
        else{
            tam=0;
        }
    }
    cout<<tong<<endl;
    return 0;
}
