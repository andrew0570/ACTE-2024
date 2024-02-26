#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<bool> check(n, false);
    check[check.size()-1]=true;
    for(int i=check.size()-2;i>=0;i--){
        for(int j=i+1;j<=min(i+v[i],(int)v.size()-1);j++){
            if(check[j]) check[i]=true;
        }
    }
    if(check[0]) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}