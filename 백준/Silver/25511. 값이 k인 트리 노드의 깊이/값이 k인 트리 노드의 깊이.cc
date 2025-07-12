#include <iostream>

using namespace std;

int n,k;
int arr[100001];
int parent[100001];

int dfs(int n, int cnt){
    if(n==0) return cnt;
    return dfs(parent[n], cnt+1);
}

int main(){
    cin>>n>>k;

    for(int i=0;i<n-1;i++){
        int p,c;
        cin>>p>>c;

        parent[c]=p;
    }

    int target=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]==k) target=i;
    }

    cout<<dfs(target, 0);
}