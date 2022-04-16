#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int mod = 1e9+7;

int main(){
    ll a, b;
    cin >> a >> b;
    ll result = 1;

    while(b > 0){
        if(b & 1)
            result = (result * a) % mod;
        
        a = (a * a) % mod;
        b = b >> 1;
    }
/*
    // using recurrence

    if(b==0)
        return 1;
    long long int res = f(a, b/2);
    if(b&1)
        return a * res * res ;
    else
        return res * res 
*/

    cout << result << endl;
    return 0;
        
}