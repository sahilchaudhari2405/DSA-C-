#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<=n;i++)
#define rfo(i,k,n) for(i=k;i>=n;i--)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)  int x; cin>>x; while(x--)
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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int32_t main(){
w(t){
string n;
cin>>n;
int l=n.length();
if((n[l-1]-'0')%2==0){
cout<<0<<endl;
}
else if((n[0]-'0')%2==0){
    cout<<1<<endl;
}
else{
    int count=0;
    for(int i=1;i<l;i++){
        if(n[i]%2==0)
        count++;
    }
    if(count>0){
        cout<<2<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
}
}

