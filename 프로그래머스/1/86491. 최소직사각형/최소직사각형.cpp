#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int hight=0;
    int width=0;
    for(int i=0;i<sizes.size();i++){
        if(sizes[i][0]<sizes[i][1]){
            int temp=sizes[i][0];
            sizes[i][0]=sizes[i][1];
            sizes[i][1]=temp;
        }
        if(hight<sizes[i][0]){
            hight=sizes[i][0];
        }
        if(width<sizes[i][1]){
            width=sizes[i][1];
        }
    }
    
    answer=hight*width;
    return answer;
}