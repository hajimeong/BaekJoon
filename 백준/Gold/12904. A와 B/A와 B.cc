#include <iostream>
#include <algorithm>

using namespace std;

string s,t;
int can=0;

int main(){
    cin>>s>>t;

    while(s.length()<t.length()){
        if(t[t.length()-1]=='A'){
            t.erase(t.length()-1);
        }else{
            t.erase(t.length()-1);
            reverse(t.begin(), t.end());
        }

        if(t.length()==s.length()){
            if(t==s){
                cout<<"1";
                break;
            }else{
                cout<<"0";
                break;
            }
        }
    }
}