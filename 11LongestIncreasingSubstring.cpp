#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    for(int loop=0;loop<n;loop++){
        cin>>s;
        vector<pair<int,string>> v(s.size(),{1,""});
        for(int i=s.size()-1;i>=0;i--){
            v[i].second+=s[i];
            for(int j=i+1;j<s.size();j++){
                if(s[j]>s[i] && 1+v[j].first>v[i].first){ 
                    v[i].first=1+v[j].first;
                    v[i].second=s[i]+v[j].second;
                }
            }
        }
        int max=0;
        for(int i=1;i<v.size();i++){
            if(v[i].first>v[max].first) max=i;
        }
        cout<<v[max].second<<endl;
    }
    return 0;
}