#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
vector<pair<int,int>>v;
int result=0;

void func(int current,int price){
    result=max(result,price); 

    if(current>=n) {
        result=max(result,price);
        return;
    };

    if(current+v[current].first<=n){
        func(current+v[current].first, price+v[current].second);
    }
    func(current+1, price);
}

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        v.push_back({a,b});
    }
    
    func(0,0);

    cout<<result;
}