/*Businessman Divans loves chocolate! Today he came to a store to buy some chocolate. Like all businessmen,
 Divan knows the value of money, so he will not buy too expensive chocolate. At the same time, too cheap chocolate tastes bad
 , so he will not buy it as well.

The store he came to has n different chocolate bars, and the price of the i-th chocolate bar is ai dollars.
 Divan considers a chocolate bar too expensive if it costs strictly more than r dollars.
  Similarly, he considers a bar of chocolate to be too cheap if it costs strictly less than l dollars.
   Divan will not buy too cheap or too expensive bars.

Divan is not going to spend all his money on chocolate bars, so he will spend at most k dollars on chocolates.

Please determine the maximum number of chocolate bars Divan can buy.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤100). Description of the test cases follows.

The description of each test case consists of two lines. The first line contains integers n, l, r, k (1≤n≤100, 1≤l≤r≤109, 1≤k≤109) — 
the lowest acceptable price of a chocolate, the highest acceptable price of a chocolate and Divan's total budget, respectively.

The second line contains a sequence a1,a2,…,an (1≤ai≤109) integers — the prices of chocolate bars in the store.

Output
For each test case print a single integer — the maximum number of chocolate bars Divan can buy.
*/

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define ll long long
#define lld long double
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }
void printarr(ll arr[], ll n)
{
    fl(i, n) cout << arr[i] << " ";
    cout << "\n";
}
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
ll moduloMultiplication(ll a, ll b, ll mod)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        b >>= 1;
    }
    return res;
}
ll powermod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
// code on c++
//  sahil template
void chocalate()
{
    ll n, k;
    ll l, r;
    cin >> n >> l >> r >> k;
    int arr[n];
    fl(i, n)
            cin >>
        arr[i];
    sort(arr, arr + n);
    ll count = 0;
    fl(i, n)
    {
        if (arr[i] > k)
        {
            break;
        }
        if (arr[i] >= l && arr[i] <= r)
        {
            count++;
            k -= arr[i];
        }
    }
    cout << count << endl;
}
int32_t main()
{

    w(x)
        chocalate();
}
