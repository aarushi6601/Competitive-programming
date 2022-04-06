#include <bits/stdc++.h>
#include<string>
using namespace std;

// #define ll long long int 
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

void solve() {
	ll n;
    cin>>n;
    vector<string>a;
    string s;
    int m=2*n;
    fo(i,m)
    {
        cin>>s;
      a.push_back(s);
      

    }
    int i=0,j=0;
    int upper_half=0,lower_half=0,right=0,left=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='I')
            {
            if(i<n)
            upper_half++;
            if(i>=n)
            lower_half++;

            if(j<n)
            left++;
           
           if(j>=n )
          right++;
            }
           
            
        }
    }
    
         cout<<max(abs(upper_half-lower_half),abs(left-right))<<"\n";
    
    

    
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