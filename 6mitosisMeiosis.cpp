#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m,p,q,r, count=0;
        cin>>m>>p>>q>>r;
        for(int j=0;j<r;j++){
            count+=m+p*(j/q);
        }
        cout<<count<<endl;
    }
    return 0;
}