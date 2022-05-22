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
    ll s=0,ans=0;
    vector<ll> result(4);
	vector<vector<ll>>colour(3,vector<ll>(4,0));
    fo(i,3)
    {
        fo(j,4)
        cin>>colour[i][j];
    }
    int m=0;
   
        fo(j,4)
        {
            ans=min(colour[0][j],min(colour[1][j],colour[2][j]));
            s+=ans;
            
           
            if(m==1)
          
            {
            // s+=ans;
              for(int k=j;k<4;k++)
             {
                 result[k]=0;
                //  cout<<0<<" ";
             }
             break;
              
            }
            else if(s>(1000000))
            {
                // cout<<"greater";
                // s+=ans;
                 s-=1000000;
              result[j]=(ans-(s));
             
            //   cout<<result[j]<<" ";
             
             
            //   cout<<s<<j;
               m=1;
            //   cout<<s;
            //   cout<<s;
            //   cout<<result[j];
            }
            else if(s<=(1000000)){
                // cout<<"lesser";
                 result[j]=(ans);
                //  cout<<result[j]<<" ";
                //  s+=ans;
                            //   cout<<result[j]<<" ";

            }
        }
        
        ll x=0;
        fo(i,4)
        {
         x+=result[i];
        //  cout<<x;
        }
        //  cout<<x;
      
      if(x==(1000000))
      {
          fo(i,4)
          cout<<result[i]<<" ";
          cout<<"\n";
      }
       
      else cout<<"IMPOSSIBLE\n";

	
   

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