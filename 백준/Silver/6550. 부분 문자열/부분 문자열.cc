#include <iostream>
#include <string>

using namespace std;

string s;
string t;

int main(){
    while(cin>>s>>t){
        int si=0;
        bool isSub=false;

        for(int i=0;i<t.length();i++){
            if(s[si]==t[i]){
                si++;
            }
            if(si==s.length()){
                isSub=true;
                break;
            }
        }
        if(isSub){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}