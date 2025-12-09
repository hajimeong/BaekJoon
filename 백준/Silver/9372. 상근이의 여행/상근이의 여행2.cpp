#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int t;
int n,m;

vector<int> v[1001];
queue<int> q;
int visit[1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n>>m;

        for(int j=1;j<=n;j++){
            v[j].clear();
            visit[j]=0;
        }
        
        for(int j=0;j<m;j++){
            int a,b;
            cin>>a>>b;

            v[a].push_back(b);
            v[b].push_back(a);
        }

        int result=0;
        q.push(1);
        visit[1]=1;

        while(!q.empty()){
            int current=q.front();
            q.pop();

            for(int j=0;j<v[current].size();j++){
                int next=v[current][j];
                if(visit[next]!=1){
                    visit[next]=1;
                    result++;
                    q.push(next);
                }
            }
        }
        cout<<result<<"\n";
    }
}
