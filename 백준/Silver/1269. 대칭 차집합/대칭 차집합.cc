#include <iostream>
#include <map>

using namespace std;

int numA, numB;
int num;
map<int, bool> m;

int main(){
    cin>>numA>>numB;

    for(int i=0;i<numA+numB;i++){
        cin>>num;

        if(m[num]==true){
            m.erase(num);
        }
        else{
            m[num]=true;
        }
    }

    cout<<m.size();
}