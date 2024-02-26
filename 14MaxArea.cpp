#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> height(n);
    for(int i=0;i<n;i++) cin>>height[i];
    
    int cl=0,cr=height.size()-1,l=0,r=height.size()-1;
    int max=(r-l)*min(height[r],height[l]);
    while(cr>cl){
        int temp=(cr-l)*min(height[cr],height[l]);
        if(temp>max){
        max=temp;
        r=cr;
        }
        temp=(r-cl)*min(height[r],height[cl]);
        if(temp>max){
        max=temp;
        l=cl;
        }
        temp=(cr-cl)*min(height[cr],height[cl]);
        if(temp>max){
        max=temp;
        l=cl;
        r=cr;
        }
        if(height[cr]>height[cl]) cl++;
        else cr--;
    }

    cout<<max<<endl;
    return 0;
}