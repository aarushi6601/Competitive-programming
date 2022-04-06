#include <bits/stdc++.h>
// #include "stdafx.h"
// #pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
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
 
ll divide(ll a,ll b)
{
    return (a+b-1)/b;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int n,k;
   cin>>n>>k;
   vector<vector<int>>grid(n+1,vector<int>(k+1,0));
   if(k==1)
   {
       cout<<"YES\n";
       fo(i,n)
       {
           cout<<i+1<<"\n";
       }
    //    continue;
   }
       else if(n%2!=0)
       {
           cout<<"NO\n";
        //    continue;
       }
       else {
         int cur=0;
         for(int j=1;j<=k;j++)
         {
             for(int i=1;i<=n;i++)
             {
                 grid[i][j]=++cur;
             }
         }
         cout<<"YES\n";
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=k;j++)
             cout<<grid[i][j]<<" ";
             cout<<"\n";
         }
       }
 
       
 
    
 }
  return 0;
 }