#include <iostream>
#include <map>

using namespace std;

int N;
map<string, bool> m;
int count=0;

int main(){
    cin>>N;

    for(int i=0;i<N;i++){
        string s;
        cin>>s;

        if(s=="ENTER"){
            m.clear();
        }
        else if(m[s]!=true){
            count++;
            m[s]=true;
        }
    }

    cout<<count;
}