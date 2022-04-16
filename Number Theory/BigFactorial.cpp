#include<bits/stdc++.h>
using namespace std;

void multiply(vector<int>&v, int x, int &size){
    int carry = 0;
    for(int i=0;i<size;i++){
        int prod = v[i] * x + carry;
        v[i] = prod % 10;
        carry = prod / 10;
    }

    while(carry != 0){
        v[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
}

int main(){

    int n;
    cin >> n;

    vector<int>v(1000, 0);
    v[0] = 1;
    int size = 1;

    for(int i=2;i<=n;i++){
        multiply(v, i, size);
    }

    for(int i=size-1;i>=0;i--){
        cout << v[i];
    }
    cout << endl;
    return 0;
}