#include <bits/stdc++.h>

using namespace std;

bool check(int i,int j){
    int a=i,b=j;
    if((i==0||j==0) && j!=i) return false;
    int temp = i%10;
    while(i>0){
        if(i%10!=temp) return false;
        i/=10;
    }
    while(j>0){
        if(j%10!=temp) return false;
        j/=10;
    }
    cout<<a<<' '<<b<<endl;
    return true;
}

int main(){
    int h, m;
    cin>>h>>m;
    int count=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<m;j++){
            if(check(i,j)) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}