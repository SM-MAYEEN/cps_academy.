/* Bismillahir Rahmanir Raheem ( 'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ)
     In the Name of Allah (SWT) the Merciful, the Compassionate*/
///\\\\/* Author: mayeenuddinhasan */\\\///
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mayeen \
     ll t = 1;  \
     cin >> t;
#define ss(a) sort(a.begin(), a.end());
#define rss(a) sort(a.rbegin(), a.rend());
#define f first
#define S second
#define pb push_back
#define sp(n, m) cout << fixed << setprecision(n) << m << endl
#define fci(c, t) for (int i = c; i < t; i++)
#define fcj(c, m) for (int j = c; j < m; j++)
#define fc(c, n) for (int i = c; i < n; i++)
#define cntt cout << cnt << endl;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int maxx = 125;
/// Binary Search for finding Lower Bound
/*      ll x;
        cin >> x;
        ll l = -1, r = n;
        while (l + 1 < r){
            ll m = (l + r) / 2;
            if (x <= a[m]) r = m;
            else l = m;
        }
        cout << r << endl;
*/

/// Binary Search for finding Upper Bound
/*      ll x;
        cin >> x;
        ll l = -1, r = n;
        while (l + 1 < r){
            ll m = (l + r) / 2;
            if (x < a[m]) r = m;
            else l = m;
        }
        cout << r << endl;
*/


int main() {
     ll x,y;cin>>x>>y;
     long long ans = (x+y - 1) / y;
     cout<<ans<<endl;

    return 0;
}
