
 //starting with the name of almighty ALLAH
 // Practice is the only shortcut to improve
 #include<bits/stdc++.h>
 #define ll long long int
 #define llu unsigned long long int 
 #define anis ios::sync_with_stdio(false);cin.tie(0);
 #define pb push_back
 #define vc vector
 #define vi vc<int>
 #define vl vc<ll>
 #define dbg(x) cerr<<x<<endl;
 #define mp(x,y) make_pair(x,y)
 #define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define tst int t;cin>>t;while(t--)
 #define srt(v) sort(v.begin(),v.end());
 #define rsrt(v) sort(v.rbegin(),v.rend());
 #define rvs(v) reverse(v.begin(),v.end());
 #define F first
 #define S second
 #define MOD 1000000007
 #define gcd(a,b) __gcd(a,b)
 #define lcm(a,b) (a*b)/gcd(a,b)
 #define PI 2*acos(0.0)
 #define pii pair<int,int>
 #define repp(i,a,b) for(ll i=a;i<=b;i++)
 #define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
 #define cinv(v) for(auto &it:v)cin>>it;
 #define all(v) v.begin(),v.end()
 #define rall(v) v.rbegin(),v.rend()
 #define ld long double
 #define endl '\n'
 const int N = 1e5;
 using namespace std;
  
  
void solve()   {    

    ll t; cin>> t; 
    for(int i=1; i<=t; i++) {

        ll a, n; cin>> a >> n;    
        ll sum = 0; 
        for(ll i =1; i<=n; i++) {
            sum  += abs(i%a - i%(a-1)); 
        }

        cout<< "Case " << i << ": " << sum << endl;
        

    }

 }
 
 
 
 
 int main()   {
    anis;
    
     solve();
 
     
    return 0;
 }
  