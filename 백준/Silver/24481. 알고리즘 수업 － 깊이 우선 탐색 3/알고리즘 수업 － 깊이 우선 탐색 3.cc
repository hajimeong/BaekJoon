#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m,r;
vector<vector<int>>v;
vector<int>visit;
vector<int>dist;

void dfs(int parent){
    visit[parent]=1;
    if(v[parent].empty()) return;
    
    for(int i=0;i<v[parent].size();i++){
        int child=v[parent][i];
        if(visit[child]!=1){
            visit[child]=1;
            dist[child]=dist[parent]+1;
            dfs(child);
        }
    }
}

int main(){
    cin>>n>>m>>r;

    for(int i=0;i<=n;i++){
        v.push_back(vector<int>());
        visit.push_back(0);
        dist.push_back(-1);
    }

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }

    dist[r]=0;
    dfs(r);

    for(int i=1;i<=n;i++){
        cout<<dist[i]<<"\n";
    }
}