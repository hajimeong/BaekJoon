#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n; //강의 수
int s,t; //s: 강의 시작 시간, t: 강의 종료 시간
vector<pair<int,int>> v; //강의 배열
priority_queue<int, vector<int>, greater<int>> pq;
int result=1;


int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s>>t;

        v.push_back({s,t});
    }

    sort(v.begin(), v.end());

    pq.push(v[0].second);

    for(int i=1;i<n;i++){
        if(pq.top()<=v[i].first){
            pq.pop();
            pq.push(v[i].second);
        } else{
            pq.push(v[i].second);
        }
    }

    cout<<pq.size();

}