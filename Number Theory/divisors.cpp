#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0, sum = 0;

    // O(n) Approach
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i << " ";
            cnt++;
            sum += i;
        }
    }
    cout << endl << cnt << " " << sum << endl;


    // O(sqrt(n)) Approach

    cnt = 0, sum = 0;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout << i << " ";
            cnt++;
            sum += i;
            if(i != n/i){
                cout  << n/i << " ";
                cnt++;
                sum += n / i;
            }
        }
    }

    cout << endl << cnt << " " << sum << endl;
    return 0;
}