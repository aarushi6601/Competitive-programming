#include <bits/stdc++.h>
// #include "stdafx.h"
// #pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 1e7+2, M = N;
//=======================
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     ll n,k;
     ll ans1=0,ans2=0;
     ll x1,x2;
     ll m=INT_MAX;
     cin>>n;
     vl a(n);
     fo(i,n)
     cin>>a[i];
     sortall(a);
     ll left=1,right=n-2;
     if(n==2)
     {
         cout<<0<<"\n";
         continue;

     }
     else if(n==3)
     {
      cout<<min(a[1]-a[0],a[2]-a[1])<<"\n";
      continue;
     }
     fo(i,n-1)
     {
      ans1+=abs(a[i]-a[1+(n-1)/2]);

     }
     m=min(ans1,ans2);
     while(left<right)
     {
       x2=a[n-1]-a[left];
       x1=a[right]-a[0];
       m=min(m,abs(x1-x2));
       if(x1<x2)
       {
           left++;
       }
       else 
       right--;

     }
     cout<<m<<"\n";



         
     }
  return 0;
 }

