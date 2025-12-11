#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int>crane;

int M;
vector<int> box;

int result=0;

bool comp(int a, int b){
    return b<a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;

        crane.push_back(a);
    }

    sort(crane.begin(), crane.end(),comp);

    cin>>M;
    for(int j=0;j<M;j++){
        int a;
        cin>>a;

        box.push_back(a);
    }

    sort(box.begin(), box.end(),comp);

    
    //상자의 무게가 크레인의 무게보다 크면 -1
    if(box[0]>crane[0]){
        cout<<"-1";
        return 0;
    }

    while(!box.empty()){
        result+=1;

        for(int i=0;i<crane.size();i++){
            for(int j=0;j<box.size();j++){
                if(crane[i]>=box[j]){
                    box.erase(box.begin()+j);
                    break;
                }
            }
        }
    }

    cout<<result;
}