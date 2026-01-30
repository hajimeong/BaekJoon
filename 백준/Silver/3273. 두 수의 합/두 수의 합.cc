#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int>v;
int x;

int result=0;

int main(){
    cin>>n;
    
    v.push_back(0);
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cin>>x;

    int left=1;
    int right=n;

    while(left<right){
        int adding=v[left]+v[right];

        if(adding==x){
            left++;
            right--;
            result++;
        }else if(adding<x){
            left++;
        }else if(adding>x){
            right--;
        }
    }

    cout<<result;

}