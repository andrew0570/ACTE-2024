#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>k;
        getline(cin,s);
        s.erase(s.begin());
        for(int j=0;j<k;j++){
            cout<<s<<endl;
        }
    }
    return 0;
}