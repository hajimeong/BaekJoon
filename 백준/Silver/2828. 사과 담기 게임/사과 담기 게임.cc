#include <iostream>

using namespace std;

int n,m; //n: 스크린 크기 m:바구니 크기
int j; //j: 떨어지는 사과 수
int arr[22]; //사과가 있는 위치
int result=0;

int main(){
    cin>>n>>m;
    cin>>j;

    int left=0;
    int right=m;

    for(int i=0;i<j;i++){
        cin>>arr[i];
    }

    for(int i=0;i<j;i++){
        int dist=0;
        if(arr[i]<=right && arr[i]>left){
                continue;
        }
        if(right<=arr[i]){
            dist=arr[i]-right;
            right+=dist;
            left+=dist;
            result+=dist;
        } 
        else if(left>=arr[i]){
            dist=left-arr[i]+1;
            right-=dist;
            left-=dist;
            result+=dist;
        }
    }

    cout<<result;
}