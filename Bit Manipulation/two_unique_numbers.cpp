#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int XOR = 0;

    for(int i=0;i<n;i++){
        XOR^=arr[i];
    }

    int count = 0;

    while(true){
        if(XOR & 1)
            break;
        count++;
        XOR>>1;
    }

    int mask = 1 << count;

    int a = 0, b = 0;

    for(int i=0;i<n;i++){
        if(arr[i] & mask)
            a ^= arr[i];
        else   
          b ^= arr[i];  
    }

    cout << a << " " << b << endl;

    return 0;
}