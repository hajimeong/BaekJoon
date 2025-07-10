#include <iostream>

using namespace std;

int e,s,m;
int result=1;
int E,S,M;


int main(){
    cin>>e>>s>>m;

    while(true){
        E=(result-e)%15;
        S=(result-s)%28;
        M=(result-m)%19;

        if(E==0&&S==0&&M==0) break;

        result++;
    }

    cout<<result;
}