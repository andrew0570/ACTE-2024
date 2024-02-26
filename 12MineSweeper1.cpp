#include <bits/stdc++.h>

using namespace std;

int count(int i, int j, vector<vector<int>> v){
    if(v[i][j]==1) return 9;
    int c=0;
    if(i>0 && j>0 && v[i-1][j-1]==1) c++; 
    if(i>0 && v[i-1][j]==1) c++; 
    if(j>0 && v[i][j-1]==1) c++; 
    if(i<v.size()-1 && j<v.size()-1 && v[i+1][j+1]==1) c++; 
    if(i<v.size()-1 && v[i+1][j]==1) c++; 
    if(j<v.size()-1 && v[i][j+1]==1) c++; 
    if(i>0 && j<v.size()-1 && v[i-1][j+1]==1) c++; 
    if(i<v.size()-1 && j>0 && v[i+1][j-1]==1) c++;
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>v[i][j];

    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){
            cout<<count(i,j,v)<<' ';
        }
        cout<<endl;
    }
    return 0;
}