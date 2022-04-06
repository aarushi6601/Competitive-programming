#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int c,powd=1,i,a,a1=0,a2=0,b1=0,b2=0,d=0,b;
      cin>>c;
      while(c>powd)  
      {
          powd*=2;
          d++;
      }
    for(i=d-1;c!=0;c/=2)
    {
        if((1<<(d-1)&c)==0)
        {
            a|=(1<<d-1);
            b|=(1<<d-1);
        }
        else{
            a1=a2=a;
            b1=b2=b;
            a1|=(1<<d-1);
            b2|=(1<<d-1);
            b1&=~(1<<d-1);
            a2&=~(1<<d-1);
            if(a1*b1>a2*b2)
            {
                a=a1;
                b=b1;
                
            }
            else{
                a=a2;
                b=b2;
            }

        }
        d--;
    }
    cout<<(a*b)<<"\n";
     }
}