#include <iostream>

using namespace std;

int main()
{
    string s;
    string tam = "hello";
    while(cin>>s)
    {
        int i=0;
        int j=0;
        string kq="NO";
        while(j < s.size())
        {
            if(tam[i] == s[j])
            {
                i++;
                j++;
            }
            if(tam[i] != s[j])
            {
                i=0;
                j++;
            }
            if(j == s.size())
            {
                kq = "YES";
                break;
            }
        }
        cout<<kq<<endl;
    }
}
