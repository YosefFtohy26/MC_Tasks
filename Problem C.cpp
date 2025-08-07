#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet1;
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> orderedSet2;


#define endl "\n"
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ld long double

#define loop(n)          for(long long i = 0; i < (n); i++)
#define lp(x, s, e)      for(long long x = (s); x < (e); x++)
#define lpe(x, s, e)     for(long long x = (s); x <= (e); x++)

#define X first
#define Y second
#define ceil_i(a, b) (((long long)(a)+(long long)(b-1))/(long long)(b))
#define floor_i(a, b) (a/b)
#define round_i(a, b) ((a+(b/2))/b)

void File() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

#define ll long long
#define OO LLONG_MAX
#define ONBit(n, k) (n | (1ll << k))
#define OFFBit(n, k) (n & (~(1 << k)))
#define IsON(n, k) ((n >> k) & 1)
#define twopower(n) (1ll << n)
long long mod = 1e9 + 7;

long long dx[] = {-1, 1, 0, 0};
long long dy[] = {0, 0, -1, 1};

bool valid(long long i, long long j, long long n, long long m) {
    return 0 <= i && i < n && 0 <= j && j < m;
}

int main()
{
    fastIO();
    // File()
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n / 2 << endl;
    }


    return 0;
}

