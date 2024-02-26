#include <bits/stdc++.h>

using namespace std;

int main(){
    int j, c;
    cin>>j>>c;
    vector<int> v(j);
    for(int i=0;i<j;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--){
        c-=v[i];
        if(c<=0){
            cout<<v.size()-i<<endl;
            break;
        }
    }
    return 0;
}