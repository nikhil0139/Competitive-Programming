#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int>sum(32, 0);

    for(int i=0;i<n;i++){
        int x = arr[i];

        for(int j=0;j<32;j++){
            int bit = x & (1 << j);
            if(bit)
                sum[j]++; 
        }     
    }

    for(int i=0;i<32;i++){
        sum[i] = sum[i] % 3;
    }

    int ans = 0;
    for(int i=0;i<32;i++){
        ans += sum[i] * 1 << i;
    }

    cout << ans << endl;
    return 0;
}