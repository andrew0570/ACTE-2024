#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int loop=0;loop<n;loop++){
        int a,p,e,m,q,s;
        cin>>a>>p>>e>>m>>q>>s;
        a = min(a+e*m,p+e*q);
        cout<<s/a<<endl;
    }
    return 0;
}