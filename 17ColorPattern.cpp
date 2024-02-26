#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j;
    cin>>i>>j;
    vector<string> v1(i);
    vector<string> v2(j);
    vector<vector<vector<string>>> dyn(i+1,vector<vector<string>>(j+1));
    for(int k=0;k<i;k++) cin>>v1[k];
    for(int k=0;k<j;k++) cin>>v2[k];

    for(int r=1;r<=i;r++){
        for(int c=1;c<=j;c++){
            if(v1[r-1]==v2[c-1]){
                dyn[r][c]=dyn[r-1][c-1];
                dyn[r][c].push_back(v1[r-1]);
            }
            else{
                if(dyn[r][c-1].size()>dyn[r-1][c].size()) dyn[r][c]=dyn[r][c-1];
                else dyn[r][c]=dyn[r-1][c]; 
            }
        }
    }

    for(string s:dyn[i][j]) cout<<s<<' ';
    cout<<endl;

    return 0;
}