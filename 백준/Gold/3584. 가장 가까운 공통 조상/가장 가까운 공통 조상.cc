#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int T,N;
int board[10002][2];
int visit[10002];
vector<int> parent1;
vector<int> parent2;
int result;


vector<int> bfs(int start, vector<int> v){
    queue<int> q;

    q.push(start);
    v.push_back(start);
    visit[start]=1;

    while(!q.empty()){
        int current=q.front();
        visit[current]=1;
        q.pop();

        int next=board[current][0];

        if(visit[next]==1) continue;
        else if(next==0) continue;
        else{
            q.push(next);
            v.push_back(next);
        }
    }

    for(int i=1;i<=N;i++){
        visit[i]=0;
    }
    return v;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>T;

    for(int i=0;i<T;i++){
        cin>>N;

        for(int j=0;j<N-1;j++){
            int parent, child;
            cin>>parent>>child;

            board[child][0]=parent;
        }
        int target1, target2;
        cin>>target1>>target2;

        parent1=bfs(target1, parent1);
        parent2=bfs(target2, parent2);

        for(int a=0;a<parent1.size();a++){
            if(result!=0){
                break;
            }
            int A=parent1[a];
            for(int b=0;b<parent2.size();b++){
                int B=parent2[b];
                if(A==B){
                    result=A;
                }
            }
        }
        cout<<result<<"\n";

        /* for(int j=0;j<parent1.size();j++){
            cout<<parent1[j]<<" ";
        }
        cout<<"\n";

        for(int j=0;j<parent2.size();j++){
            cout<<parent2[j]<<" ";
        }
        cout<<"\n"; */
        

        parent1.clear();
        parent2.clear();
        result=0;
    }  
}