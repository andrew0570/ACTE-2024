#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b, s;
    cin>>a;
    cin>>b;
    map<char,int> m, temp;
    for(char i:a+b){if(i<97)i+=32; m[i]++;}

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        temp={};
        for(char c:s){if(c<97)c+=32; temp[c]++;}
        for(auto i:temp){
            if(m[i.first]<i.second){cout<<"NO"<<endl; return 0;}
        }
    }
    cout<<"YES"<<endl;
    return 0;
}