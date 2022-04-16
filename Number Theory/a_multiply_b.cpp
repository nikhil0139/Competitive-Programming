#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int mod = 1e9+7;

int main(){
    ll a, b;
    cin >> a >> b;
    ll result = 0;

    while(b > 0){
        if(b & 1)
            result = (result + a) % mod;
        
        a = (a + a) % mod;
        b = b >> 1;
    }

    cout << result << endl;

    return 0;
}