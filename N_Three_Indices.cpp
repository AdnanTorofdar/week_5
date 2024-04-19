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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, y, z, found = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < a[i])
        {
            if (a[i] > a[i + 1])
            {
                x = i;
                y = i + 1;
                z = i + 2;
                found = 1;
                break;
            }
        }
    }

    if (found == 1)
    {
        cout << "YES\n";
        cout << x << " " << y << " " << z << "\n";
    }
    else
        cout << "NO\n";
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