#include <bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int 
#define ar array
// #define fo(i,n) for(int i=0;i<n;i++)
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

int n, b, a[100000];

void solve() {
	string s1,s2;
    cin>>s1>>s2;
    ll x=0;
    ll flag=0,cnt=0,s=0;
    ll n=s1.length();int n2=s2.length();
    map<char,ll>mp1,mp2;
    fo(i,n2)
    {
       mp2[s2[i]]++;
    }
    fo(i,n)
    {
       mp2[s1[i]]--;
       if(mp2[s1[i]]<0)
       {
       flag=1;
       break;
       }
       
    //    if(i!=n-1 && s1[i]==s1[i+1])
    //    cnt++;
    }
    
    // if(cnt==n-1)
    // {
    //     if(mp1[s1[0]]<mp2[s1[0]])

    // }
    // for(char ch='a';ch<='z';ch++)
    // {
    //     if(mp1[ch]<mp2[ch])
    //     x++;
    //     else if(mp1[ch]>mp2[ch])
    //     {
    //         flag=1;
    //         break;
    //     }
    // }
    // for(char ch='A';ch<='Z';ch++)
    // {
    //     if(mp1[ch]<mp2[ch])
    //     x++;
    //     else if(mp1[ch]>mp2[ch])
    //     {
    //         flag=1;
    //         break;
    //     }
    // }
    // for(auto it:mp2)
    // {
    //     if(it.second<0)
    //     {
    //         flag==-1;
    //         break;
    //     }
    //     else 
    //     s+=it.second;

    // }
    if(flag==0)
    {
        for(auto it:mp2)
        s+=it.second;
        cout<<s<<"\n";
    }
    else if(flag==1)
    cout<<"IMPOSSIBLE\n";
   
   

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