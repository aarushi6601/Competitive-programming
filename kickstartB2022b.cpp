#include <bits/stdc++.h>
#include<string>
using namespace std;

#define ll long long int 
#define ar array
// #define fo(i,n) for(int i=0;i<n;i++)
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

int n, b, a[100000];
vector<int> getfact(int n)
{
    vector<int>res;
    while(n!=1)
    {
        res.pb(spf[n]);
        n/=spf[n];
    }
    return res;
}
int ispalind(string i)
{
    string k=i;
    reverse(all(i));
    if(i==k)
    return 1;
    return 0;
}
void solve() {
	int x;
    cin>>x;
     vector <int> result;
    result=getfact(x);
    int ans=1;
    int cnt=1;
    for(int i=1;i<=result.size();i++)
    {
        if(result[i]==result[i-1])
        cnt++;
        else{
            ans=ans*(cnt+1);
            cnt=1;
        }
    }
    ans=ans*(cnt+1);
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
}