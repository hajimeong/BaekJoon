#include <iostream>
#include <vector>

using namespace std;

string n;
int v[10];

int main(){
    cin>>n;

    for(int i=0;i<n.length();i++){
        switch (n[i])
        {
        case '0':
            v[0]++;
            break;
        case '1':
            v[1]++;
            break;
        case '2':
            v[2]++;
            break;
        case '3':
            v[3]++;
            break;
        case '4':
            v[4]++;
            break;
        case '5':
            v[5]++;
            break;
        case '6':
            if(v[6]<=v[9]) v[6]++;
            else v[9]++;
            break;
        case '7':
            v[7]++;
            break;
        case '8':
            v[8]++;
            break;
        case '9':
            if(v[6]>=v[9])v[9]++;
            else v[6]++;
            break;
        default:
            break;
        }
    }

    int result=0;
    for(int i=0;i<10;i++){
        result=max(v[i], result);
    }
    cout<<result;
}