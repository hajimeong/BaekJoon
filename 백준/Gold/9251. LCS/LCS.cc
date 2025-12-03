#include <iostream>

using namespace std;

string s1, s2;
int dp[1001][1001];

int main(){
    cin>>s1>>s2;

    int n=s1.size();
    int m=s2.size();

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            dp[i][j]=max(max(dp[i-1][j], dp[i][j-1]), dp[i][j]);
        }
    }

    cout<<dp[n][m];
}