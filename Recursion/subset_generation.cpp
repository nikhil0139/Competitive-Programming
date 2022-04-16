#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;

void subset(vector<int>&v, int i, vector<int>&arr){
    if(i == arr.size()){
        ans.push_back(v);
        return;
    }

    subset(v, i + 1, arr);

    v.push_back(arr[i]);
    subset(v, i + 1, arr);
    v.pop_back();
}

int main(){

    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int>v;

    subset(v, 0, arr);

    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}