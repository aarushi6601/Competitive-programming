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
	int n,m;
    cin>>n>>m;
    char ch='+',ch1='-';
    for(int rep=0;rep<2;rep++)
    {
    cout<<". "<<". ";
    for(int i=1;i<n*m;i++)
    {
        if(i&1)
        cout<<ch<<" ";
        else 
        cout<<ch1<<" ";
    }
    cout<<"\n";
    ch='|',ch1='.';

    }
    ch='+',ch1='-';
    char ch2='|',ch3='.';
    int x=((n-1)*2)+1;  
    int y=(m*2)+1;
    fo(i,x)
    {
        fo(j,y)
        {
            if(i%2==0)
            {
                if(j%2==0)
                cout<<'+'<<" ";
                else cout<<'-'<<" ";
            }
            else 
            {
                if(j%2==0)
                cout<<'|'<<" ";
                else cout<<'.'<<" ";
            }
            cout<<"\n";
        }
    }  
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