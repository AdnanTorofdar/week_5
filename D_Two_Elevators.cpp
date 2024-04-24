//-----------_The_eRRoR_----------
//---------Adnan_Torofdar----------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void _The_eRRoR_()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll m = abs(a - 1);
    ll n = abs(b - c) + (c - 1);
    if (m < n)
        cout << 1 << endl;
    else if (m == n)
        cout << 3 << endl;
    else
        cout << 2 << endl;
}
int main()
{
    fast;
    ll test_case = 1;
    cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}