/* #include <iostream>
#include <vector>
using namespace std;

int countNonBeautifulSubarrays(vector<int>& A) {
    int n = A.size();
    int nonBeautifulSubarrays = 0;
    int currentCount = 1;

    for (int i = 1; i < n; i++) {
        if (A[i] == A[i - 1]) {
            currentCount++;
        } else {
            nonBeautifulSubarrays += (currentCount * (currentCount + 1)) / 2;
            currentCount = 1;
        }
    }

    nonBeautifulSubarrays += (currentCount * (currentCount + 1)) / 2;

    return n * (n + 1) / 2 - nonBeautifulSubarrays;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = countNonBeautifulSubarrays(A);

        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}

 */



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

 
int subArr(vector<int>& arr) {
    int n = arr.size();
    int fat = 0;
    int inkul = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            inkul++;
        } else {
            fat += (inkul * (inkul + 1)) / 2;
            inkul = 1;
        }
    }
    fat += (inkul * (inkul + 1)) / 2;

    return n * (n + 1) / 2 - fat;

}
  
  
void solve()   {     
  
   int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = subArr(A);

        cout << "Case " << t << ": " << result << endl;
    }

 
   
 
 }
 
 
 int main()   {
    anis;
 
    solve();
 
     
    return 0;
 }
  