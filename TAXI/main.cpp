#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d,i,j,x;
	cin>>n;
	a=b=c=d=0;
	for(i=1;i<=n;i++)
	{
		cin>>j;
		if(j==1) a++;
		if(j==2) b++;
		if(j==3) c++;
		if(j==4) d++;
	}
	x=d;
    x=x+b/2; b=b%2;
    x=x+b; a=a-b*2;
    x=x+c; a=a-c;
    if(a>0)
    {
    	if(a%4==0) x=x+a/4;
    	else x=x+a/4+1;
	}

	cout<<x;
}
