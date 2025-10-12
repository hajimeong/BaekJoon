#include <iostream>
#include <string>

using namespace std;


int main(){
    string input;

    cin>>input;
    
    int leng=input.length();

    for(int i=0;i<leng;i++){
        if(i!=0&&i%10==0){
            cout<<"\n"<<input[i];
        }
        else{
            cout<<input[i];
        }
    }
}