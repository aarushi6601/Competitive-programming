#include <bits/stdc++.h>
// #include "stdafx.h"
// #pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define allr(v) (v).rbegin(),(v).rend()
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
// #define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
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
      int cnt=1;
     int n;
        cin>>n;
       vi a(n);
       vi v(n),odd(n),even(n),v2(n);
       int flag=0;
       fo(i,n)
       cin>>a[i];
       fo(i,n)
       {
           
           if(a[i]&1)
           {
               odd.pb(a[i]);
               v.pb(a[i]);

           }
           else{
               even.pb(a[i]);
               v2.pb(a[i]);
           }
       }
       sort(all(odd));
       sort(all(even));
       if(v==odd && v2==even)
       cout<<"YES\n";
       else cout<<"NO\n";
      
        
    }
return 0;
}
  
    