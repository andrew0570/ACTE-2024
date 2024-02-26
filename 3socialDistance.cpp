#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a;
    cin>>n;
    map<int, int> m;
    for(int i=0;i<n*2;i++){
        cin>>a;
        m[a]++;
    }
    int max=0;
    for(map<int,int>::iterator it= m.begin();it!=m.end();it++) if(it->second>max) max=it->second;
    cout<<max<<endl;
    return 0;
}