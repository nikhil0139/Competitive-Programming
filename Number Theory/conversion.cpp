// Convert following: 
//   1) decimal to binary
//   2) decimal to octal
//   3) decimal to hexadecimal
//   4) binary to decimal
//   5) binary to octal
//   6) binary to hexadecimal
//   7) octal to decimal
//   8) octal to binary
//   9) octal to hexadecimal
//  10) hexadecimal to decimal
//  11) hexadecimal to binary
//  12) hexadecimal to octal

#include <bits/stdc++.h>
using namespace std; 

#define ll long long int                                                                                                                                                                                                                                                                                                     

ll DtoB(ll n)
{
    string ans;

    while(n > 0)
    {
        ans += to_string(n%2);
        n/=2;
    }

    reverse(ans.begin(), ans.end());
    return stoi(ans);
}

ll DtoO(ll n)
{
    string ans;

    while(n > 0)
    {
        ans += to_string(n%8);
        n/=8;
    }

    reverse(ans.begin(), ans.end());
    return stoi(ans);
}

string DtoH(ll n)
{
    string ans;

    while(n > 0)
    {
        if(n % 16 < 10)
            ans += to_string(n%16);
        else{
            char c = n % 16 + 55;
            ans += c;
        }
        n/=16;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

ll BtoD(ll n)
{
    int i = 1;
    ll ans = 0;
    while(n > 0)
    {
        ans += (n%10) * i;
        n/=10;
        i*=2;
    }
    return ans;
}

ll BtoO(long long int n)
{
    ll ans = 0, i = 1;
    while(n > 0)
    {
        ans = BtoD(n%1000) * i + ans;
        n/=1000;
        i *= 10;
    }
    return ans;
}

string BtoH(ll n)
{
    string ans;
    while(n > 0)
    {
        int x = BtoD(n%10000);
        if(x % 16 < 10)
            ans = to_string(x) + ans;
        else{
            char c = x % 16 + 55;
            ans = c + ans;
        }

        n/=10000;
    }
    return ans;   
}

ll OtoD(ll n)
{
    ll ans = 0, i = 1;
    while(n > 0)
    {
        ans += (n%10) * i;
        n/=10;
        i *= 8;
    }
    return ans;
}

ll OtoB(ll n)
{
    ll ans = 0, i = 1;
    while(n > 0)
    {
        int x = DtoB(n % 10);
        ans = x * i + ans;
        n /= 10;
        i*=1000;
    }
    return ans;
}

string OtoH(ll n)
{
    ll x = OtoB(n);
    string ans = BtoH(x);
    return ans;
}

ll HtoD(string str)
{
    ll ans = 0, j = 1;
    for(int i=str.length()-1;i>=0;i--){
        ll x;
        if(str[i] >= '0' && str[i] <= '9'){
            x = str[i] - '0';
        }
        else{
            x = str[i] - 'A' + 10;
        }
        ans += x * j;
        j *= 16;
    }
    return ans;
}

ll HtoB(string str)
{
    ll ans = 0, j = 1;
    for(int i=str.length()-1;i>=0;i--){
        ll x;
        if(str[i] >= '0' && str[i] <= '9'){
            x = str[i] - '0';
        }
        else{
            x = str[i] - 'A' + 10;
        }
        int temp = DtoB(x);
        ans = temp * j + ans;
        j *= 10000;
    }
    return ans;
}

ll HtoO(string str)
{
    ll n = HtoB(str);
    ll ans = BtoO(n);
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int decimal;
    cin >> decimal;

    cout << "Decimal to Binary: " << DtoB(decimal) << endl;

    cout << "Decimal to Octal: " << DtoO(decimal) << endl;

    cout << "Decimal to HexaDecimal: " << DtoH(decimal) << endl;

    int binary;
    cin >> binary;

    cout << "Binary to Decimal: " << BtoD(binary) << endl;

    cout << "Binary to Octal: " << BtoO(binary) << endl;

    cout << "Binary to HexaDecimal: " << BtoH(binary) << endl;


    int octal;
    cin >> octal;

    cout << "Octal to Decimal: " << OtoD(octal) << endl;

    cout << "Octal to Binary: " << OtoB(octal) << endl;

    cout << "Octal to HexaDecimal: " << OtoH(octal) << endl;

    string hexaDecimal;
    cin >> hexaDecimal;

    cout << "HexaDecimal to Decimal: " << HtoD(hexaDecimal) << endl;

    cout << "HexaDecimal to Binary: " << HtoB(hexaDecimal) << endl;

    cout << "HexaDecimal to Octal: " << HtoO(hexaDecimal) << endl;

    
    return 0;

}