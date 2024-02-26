#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int loop=0;loop<n;loop++){
        int m, i=1, time=1,j=2;
        cin>>m;
        while(abs(m-(i+j))<abs(m-(i+1))){
            i+=j;
            j++;
            time++;
        }
        time+=abs(m-i);
        cout<<time<<endl;
    }
    return 0;
}