#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        string s;
        cin>>x>>y;
        cin>>s;
        map<int,int>mp;
        int i,x1=0,y1=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='R')
            x1++;
            if(s[i]=='L')
            x1--;
            if(s[i]=='D')
            y1--;
            if(s[i]=='U')
            y1++;
            mp[s[i]]++;
        }
        if(x1==x && y1==y)
        {
            cout<<"Yes"<<"\n ";
            break;

        }
        else
        {
            int p,q;
           x1<0?p=='L':p=='R';
           y1<0?q=='D':q=='U';
           mp[p]-=x1;
           mp[q]-=y1;
           if(mp[p]<0||mp[q]<0)
           {
               cout<<"NO"<<"\n";
               break;
           }
           else
           {
               cout<<"Yes"<<"\n";
           }
           
        }
        


    }
}