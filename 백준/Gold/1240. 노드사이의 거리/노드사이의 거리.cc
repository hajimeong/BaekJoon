#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m;
int result=0;
vector<pair<int,int>>board[1002];
int visit[1002];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;

    for(int i=0;i<n-1;i++){
        int a,b, dist;
        cin>>a>>b>>dist;

        board[a].push_back({b, dist});
        board[b].push_back({a,dist});
    }

    for(int i=0;i<m;i++){
        queue<pair<int,int>>q;
        int start, end;
        cin>>start>>end;

        q.push({start,0});

        while(true){
            int current=q.front().first;
            int currentDist=q.front().second;

            if(current==end){
                result=currentDist;
                break;
            }

            visit[current]=1;
            q.pop();

            for(int j=0;j<board[current].size();j++){
                int next=board[current][j].first;
                int nextDist=board[current][j].second;
                
                if(visit[next]!=1){
                    q.push({next, currentDist+nextDist});
                }
            }
        }
        cout<<result<<"\n";

        for(int j=1;j<=n;j++){
            visit[j]=0;
        }
    }
    return 0;
}