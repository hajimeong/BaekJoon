#include <iostream>
#include <string>

using namespace std;

int t; //테스트케이스 수
int n, m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>t;

    for(int i=0;i<t;i++){
        int result=0;

        cin>>n>>m;

        for(int j=n;j<=m;j++){
            string s=to_string(j);

            for(int k=0;k<s.length();k++){
                if(s[k]=='0') result++;
            }
        }

        cout<<result<<"\n";
    }
}