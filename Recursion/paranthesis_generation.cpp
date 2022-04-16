#include<bits/stdc++.h>
using namespace std;

vector<string>ans;

void paranthesis(string &str, int open, int close){
    if(open == 0 && close == 0){
        ans.push_back(str);
        return;
    }

    if(open > 0){
        str.push_back('(');
        paranthesis(str, open - 1, close);
        str.pop_back();
    }

    if(close > 0 && open < close){
        str.push_back(')');
        paranthesis(str, open, close-1);
        str.pop_back();
    }
}

int main(){
    int n;
    cin >> n;

    string s;

    paranthesis(s, n , n);

    for(auto i : ans)
        cout << i << endl;

}