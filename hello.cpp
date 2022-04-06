#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,d;
	cin>>n>>d;
	int s;
	long long int a[n],ans=0,sum=0;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	 s+=a[i];
	}
	int i,j,c;
    long long int get=sum/n;
    if(get*n!=sum)
    {
    cout<<-1<<endl;
    continue;
    }
    int flag=0;
    for(i=0;i<d;i++)
    {
	    for(j=i;j<n-d;j+=d)
	    {
		    if(a[j]>get)
		    {
			    a[j+d]+=(a[j]-get);
			    ans+=a[j]-get;
			    a[j]-=(a[j]-get);
            }
		    else if(a[j]<get)
		    {
			    a[j+d]-=get-a[j];
			    ans+=get-a[j];
			    a[j]+=get-a[j];
		    }
    }
    }


	}

}
