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
     int n;
     cin >> n;
        vector<pl> liked, unliked;
        vl p(n + 1, 0);
        for(int i=1;i<=n;i++)
        {
            cin >> p[i];
        }
        string s;
        cin >> s;
        for(int i=0;i<=n - 1;i++)
        {
            if (s[i] == '1')
            {
                liked.pb({p[i + 1], i + 1});
            }
            else
            {
                unliked.pb({p[i + 1], i + 1});
            }
        }
        sort(allr(liked));
        sort(allr(unliked));
        ll curr = n;
        vl ansvec(n + 1);
        for (auto x : liked)
        {
            ansvec[x.second] = curr;
            curr--;
        }
        for (auto x : unliked)
        {
            ansvec[x.second] = curr;
            curr--;
        }
        for(int i=1;i<=n;i++)cout << ansvec[i] << " ";
        cout << "\n";
 }
return 0;
  
       }