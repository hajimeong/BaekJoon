#include <iostream>
#include <cmath>

using namespace std;

int n;
int dp[50002];

int main(){
    cin>>n;

    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        int count=50000;
        for(int j=1;j*j<=i;j++){
            count=min(count,dp[i-j*j]);
        }
        dp[i]=count+1;
    }

    cout<<dp[n];

}