#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    //cout << a << " " << b << endl;

    int carry = 0, i = 0;
    string ans = "";

    while (i < a.length() && i < b.length())
    {
        int c = carry + (a[i] - '0') + (b[i] - '0');
        ans += (c % 10) + '0';
        i++;
        carry = c / 10;
    }

    //cout << ans << endl;
    if (i == a.length())
    {
        while (i < b.length())
        {
            int c = carry + (b[i] - '0');
            ans += (c % 10) + '0';
            i++;
            carry = c / 10;
        }
    }
    else
    {
        while (i < a.length())
        {
            int c = carry + (a[i] - '0');
            ans += (c % 10) + '0';
            i++;
            carry = c / 10;
        }
    }

    if (carry == 1)
        ans += '1';

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}