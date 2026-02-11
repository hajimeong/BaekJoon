#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100002];
int dp[100002];
int result=-100000000;

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        dp[i]=max(arr[i], dp[i-1]+arr[i]);
        result=max(result, dp[i]);
    }

    cout<<result;

}