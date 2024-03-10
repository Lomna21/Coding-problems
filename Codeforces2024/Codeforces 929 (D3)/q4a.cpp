//lets begin...
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define float double
#define pi (3.141592653589)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define NO cout<<NO<<endl
#define YES cout<<YES<<endl
#define next cout<<endl
#define all(v) v.begin(),v.end()
#define min3(a,b,c) min(c,min(a,b))
#define min4(a,b,c,d) min(d,min(c,min(a,b)))
#define FOR_0(i,n) for(int i=0;i<n;i++)
#define FOR_N(n,i) for(int i=n-1;i>=0;i--)
#define FOR_AB(a,b) for(int i=a;i<b;i++)
#define N_5 100005
#define N_9 1000000009

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}

int binaryToDecimal(string n){string num = n;int dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
 
//Check
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(int x){if (x >= 0) {int sr = sqrt(x);return (sr * sr == x);}return false;}

void solve(){
        int n; cin >> n; 
        int arr[n]; 
        map<int,int> mp; 

        for(int i = 0; i < n; i++) { 
            cin >> arr[i]; 
            mp[arr[i]]++; 
        } 
        auto ans = mp.begin();
        // cout<<ans->first<<" ";
        if(mp.begin()->second == 1) { 
            
            cout << "YES" << endl; 
            return;
        } 
        vector<int> v;         
        for(auto x : mp) { 
            v.push_back(x.first);
            // cout<<x.first<<" "; 
        } 
        if(v.size() == 1) { 
            cout << "NO" << endl; 
            return;
        } 
        for(int i = 1; i < v.size(); i++) { 
            if(v[i] % v[0] != 0) { 
                cout << "YES" << endl;  
                return; 
            } 
        } 
        cout << "NO" << endl; 
} 
signed main(){
    fast;
    int T;cin>>T;
    for(int t=1;t<=T;t++){
    solve();
    }
    return 0;
}