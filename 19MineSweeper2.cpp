#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<vector<int>>> v(n,vector<vector<int>>(n,vector<int>(n,-1)));
    vector<vector<int>> front(n,vector<int>(n));
    vector<vector<int>> right(n,vector<int>(n));
    vector<vector<int>> top(n,vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>front[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>right[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>top[i][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(front[i][j]==0) for(int k=0;k<n;k++) v[i][j][k]=0;
            if(front[i][j]==n) for(int k=0;k<n;k++) v[i][j][k]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            if(right[i][k]==0) for(int j=0;j<n;j++) v[i][j][k]=0;
            if(right[i][k]==n) for(int j=0;j<n;j++) v[i][j][k]=1;
        }
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            if(top[k][j]==0) for(int i=0;i<n;i++) v[i][j][n-k-1]=0;
            if(top[k][j]==n) for(int i=0;i<n;i++) v[i][j][n-k-1]=1;
        }
    }
    while(true){
        bool cont=true;
        for(int i=0;i<n;i++) for(int j=0;j<n;j++) for(int k=0;k<n;k++) if(v[i][j][k]==-1) cont=false;
        if(cont) break;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(v[i][j][k]==-1){
                        int icount=0,jcount=0,kcount=0;
                        for(int i=0;i<n;i++) if(v[i][j][k]==1) icount++;
                        for(int j=0;j<n;j++) if(v[i][j][k]==1) jcount++;
                        for(int k=0;k<n;k++) if(v[i][j][k]==1) kcount++;
                        if(front[i][j]==kcount || right[i][k]==jcount || top[n-k-1][j]==icount) v[i][j][k]=0;
                        else{
                            int ic=0,jc=0,kc=0;
                            for(int i=0;i<n;i++) if(v[i][j][k]==-1) ic++;
                            for(int j=0;j<n;j++) if(v[i][j][k]==-1) jc++;
                            for(int k=0;k<n;k++) if(v[i][j][k]==-1) kc++;
                            if(ic+icount==top[n-k-1][j] || jc+jcount==right[i][k] || kc+kcount==front[i][j]) v[i][j][k]=1;
                        }
                    }
                }
            }
        }
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<v[i][j][k]<<' ';
            cout<<endl;
        }
    }
    return 0;
}