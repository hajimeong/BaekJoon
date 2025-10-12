#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int t;
int n,m;
priority_queue<pair<int,int>>order;
queue<pair<int,int>> list;
vector<int> result;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n>>m;

        for(int j=0;j<n;j++){
            int a;
            cin>>a;

            order.push({a, j});
            list.push({j,a});
        }

        while(!order.empty()){
            if(order.top().first>list.front().second){
                pair<int,int> now=list.front();
                list.pop();
                list.push(now);
            }
            else if(order.top().first==list.front().second){
                result.push_back(list.front().first);
                list.pop();
                order.pop();
            }

          /*   for(int j=0;j<result.size();j++){
                cout<<result[j]<<" ";
            }
            cout<<"\n"; */
        }

        auto it=find(result.begin(), result.end(), m);
        cout<<it-result.begin()+1<<"\n";
        result.clear();

    }

}