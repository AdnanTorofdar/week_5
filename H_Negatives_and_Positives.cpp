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
    int n, neg = 0, minn = INT_MAX;
    cin >> n;
    long long sum = 0;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += abs(A[i]);
        minn = min(minn, abs(A[i]));
        if (A[i] < 1)
            neg++;
    }

    if (neg % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - 2 * minn <<endl;
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