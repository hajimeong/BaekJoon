#include <iostream>

using namespace std;

int t;
int n,m;
int dp[32][32];

int main(){
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n>>m;

        for(int j=1;j<=m;j++){
            dp[1][j]=j;
        }

        for(int j=2;j<=n;j++){
            for(int k=0;k<=m;k++){
                if(k==0) dp[j][k]=0;
                if(j>k) dp[j][k]=0;

                dp[j][k]=dp[j][k-1]+dp[j-1][k-1];
            }
        }

        cout<<dp[n][m]<<"\n";
    }
}