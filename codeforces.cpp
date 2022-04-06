#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n%10!=0)
        {
            n-=2021;
        }
        if(n%2020==0||n==0)
        cout<<"yes"<<"\n";
        else
        {
           cout<<"no"<<"\n";
        }
        
    }
}