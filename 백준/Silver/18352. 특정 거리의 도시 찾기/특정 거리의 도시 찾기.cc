#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n; //노드 수
int m; //연결 수
int k;//거리 정보
int x;//출발 도시 번호
vector<vector<int>>v;
vector<int> dist;
bool exist=false;
queue<int>q;

void bfs(int start){
    q.push(start);
    dist[start]=0;

    while(!q.empty()){
        int current=q.front();
        int dep=dist[current];
        q.pop();

        for(int i=0;i<v[current].size();i++){
            int next=v[current][i];

            if(dist[next]==300001){
                q.push(next);
                dist[next]=dep+1;
            }
        }
    }
}

int main(){
    cin>>n>>m>>k>>x;

    for(int i=0;i<=n;i++){
        v.push_back(vector<int>());
        dist.push_back(300001);
    }

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        v[a].push_back(b);
    }
    
    bfs(x);

    for(int i=1;i<=n;i++){
        if(dist[i]==k){
            exist=true;
            cout<<i<<"\n";
        }
    }

    if(!exist){
        cout<<-1;
    }

}