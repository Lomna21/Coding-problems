//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define nextline cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define pi (3.141592653589)
void solve(){
    int n,k;
    cin>>n>>k;
    int ans = 1;
    int rem = n-k;
    if(rem<=1){
        cout<<ans<<endl;
    }
    else{
        cout<<n<<endl;
    }
}
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    //cout<<"CASE: "<<t<<endl;
    solve();
    }
    return 0;
}