#include <bits/stdc++.h>

using namespace std;

void rec(vector<char> curr, vector<char> &max, vector<pair<char,char>>v){
    auto it = find_if(v.begin(),v.end(),[=](const auto &i){return i.first==curr[curr.size()-1];});
    while(it!=v.end()){
        auto i = find(curr.begin(),curr.end(),it->second);
        if(i!=curr.end()){
            if(curr.size()-(i-curr.begin())>max.size()){
                max = vector<char>(i,curr.end());
            }
        }
        else{
            curr.push_back(it->second);
            rec(curr, max, v);
            curr.pop_back();
        }
        it = find_if(it+1,v.end(),[=](const auto &i){return i.first==curr[curr.size()-1];});
    }
    it = find_if(v.begin(),v.end(),[=](const auto &i){return i.second==curr[curr.size()-1];});
    while(it!=v.end()){
        auto i = find(curr.begin(),curr.end(),it->first);
        if(i!=curr.end()){
            if(curr.size()-(i-curr.begin())>max.size()){
                max = vector<char>(i,curr.end());
            }
        }
        else{
            curr.push_back(it->first);
            rec(curr, max, v);
            curr.pop_back();
        }
        it = find_if(it+1,v.end(),[=](const auto &i){return i.second==curr[curr.size()-1];});
    }
}

int main(){
    int n;
    cin>>n;
    vector<pair<char,char>> v(n);
    vector<char> max,curr;
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
    curr.push_back(v[0].first);

    rec(curr,max,v);

    for(char i:max) cout<<i<<' ';
    cout<<endl;
    return 0;
}