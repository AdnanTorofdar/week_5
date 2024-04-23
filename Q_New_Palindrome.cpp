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
    string s;
    cin >> s;
    int l = 0, r = s.length() - 1;
    int f = 1, cnt = 0;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            f = 0;
            break;
        }
        if (s[0] == s[l])
        {
            cnt++;
        }
        l++;
        r--;
    }
    if (f == 1 && cnt != (s.length() / 2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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