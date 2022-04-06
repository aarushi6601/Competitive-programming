#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
double pi = acos(-1);
#define tezi        ios_base::sync_with_stdio(false);\
                    cin.tie(0);\
                    cout.tie(0);
#define FOR(i,a,b)  for(int i=a;i<b;i++)
#define FORR(i,b,a) for(int i=b;i>=a;i--)
#define fill(a,b)   memset(a,b,sizeof(a))
#define _time_      1.0 * clock() / CLOCKS_PER_SEC
#define fi          first
#define se          second
#define mp          make_pair 
#define pb          push_back
#define all(a)      a.begin(),a.end()
#define rev(a)      reverse(all(a))
#define reva(a,n)   reverse(a,a+n)
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

ll powerm(ll a,ll b,ll m){
    if(b==0) return 1;
    if(b&1) return a*powerm(a*a%m,b/2,m)%m;
    return powerm(a*a%m,b/2,m);
}
ll power(ll a,ll b){
    if(b==0) return 1;
    if(b&1) return a*power(a*a,b/2);
    return power(a*a,b/2);
}
ll sqroot(ll number){ 
    ll x = sqrt(number);
    while(x*x<number)x++;
    while(x*x>number)x--;
    return x;
}
ll cbroot(ll number){
    ll x = cbrt(number);
    while(x*x*x<number)x++;
    while(x*x*x>number)x--;
    return x;
}

const int maxn=2e5+5;
//bool prime[maxn];

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

ll st[maxn];

int main(){
    tezi
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //sieve
    //memset(prime,true,sizeof(prime)); 
    //for(ll p=2;p*p<maxn;p++)if(prime[p]==true)for(ll i=p*p;i<maxn;i+=p)prime[i]=false;

    FOR(i,0,maxn)st[i]=0;
    string s,t;
    cin >> s >> t;
    s += s;
    int id = s.find(t);
    if(id!=-1){
        vector<int> z = z_function(s.substr(id));
        st[id+t.length()-1] = 1;
        FOR(i,id+t.length(),s.length()){
            st[i] = st[i-1];
            if(z[i-(id+t.length())+1]>=t.length()) st[i]++;
        }
    }
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        ll ans=0;
        ll k = (n/(s.length()/2));
        ans = k*st[s.length()/2-1];
        if(k>=1){
            ans += (k-1)*(st[s.length()-1] - 2*st[s.length()/2-1]);
        }
        ll r = n%(s.length()/2);
        if(r){
            ans += st[r-1];
            if(k) ans += st[r-1+(s.length()/2)] - st[s.length()/2-1] - st[r-1];
        }
        cout << ans << "\n";
    }
    
    return 0;
}

// abc abc abc abc ab

/*
######                  ####### #     #   ###   #     #    #    ####### ####### ######
#     #  ######  #    # #     # ##   ##    #    ##    #   # #      #    #     # #     #
#     #  #       ##   # #     # # # # #    #    # #   #  #   #     #    #     # #     #
#     #  #####   # #  # #     # #  #  #    #    #  #  # #     #    #    #     # ######
#     #  #       #  # # #     # #     #    #    #   # # #######    #    #     # #   #
#     #  #       #   ## #     # #     #    #    #    ## #     #    #    #     # #    #
######   ######  #    # ####### #     #   ###   #     # #     #    #    ####### #     #
*/