#include <bits/stdc++.h>

using namespace std;

int main(){
    long n;
    cin>>n;
    long a=1, b=0, t;
    for(int i=0;i<=n;i++){
        t=a;
        a = (a+b)*3;
        b=t;
    }
    cout<<a;
    return 0;
}