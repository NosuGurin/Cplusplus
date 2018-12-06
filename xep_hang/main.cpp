#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string kq;
    char kytu='Z';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==kytu) continue;
        if(s[i]>s[i+1])
        {
            kytu=s[i];
            break;
        }
    }
    if(kytu=='Z')
    {
        kq=s;
        kq=kq.erase(s.size()-1,s.size());
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==kytu) continue;
            else
                kq+=s[i];
        }
    }
    cout<<kq<<endl;
}
