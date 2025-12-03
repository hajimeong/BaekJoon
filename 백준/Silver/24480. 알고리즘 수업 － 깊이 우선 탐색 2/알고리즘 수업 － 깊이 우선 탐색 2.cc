#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,r;
vector<int>board[200001];
int visit[200001]={};
int result[200001]={};
int dist=1;

bool comp(int a,int b){
    return b<a;
}

void func(int start){
    result[start]=dist++;
    visit[start]=1;
    for(int i=0;i<board[start].size();i++){
        if(visit[board[start][i]]!=1){
            func(board[start][i]);
        }
    }
}

int main(){
    cin>>n>>m>>r;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        board[a].push_back(b);
        board[b].push_back(a);
    }

    for(int i=1;i<=m;i++){
        sort(board[i].begin(),board[i].end(),comp);
    }

    result[r]=dist;
    func(r);

    for(int i=1;i<=n;i++){
        cout<<result[i]<<"\n";
    }
}