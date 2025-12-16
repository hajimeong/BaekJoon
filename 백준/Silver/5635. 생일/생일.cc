#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int n;
vector<pair<pair<int, int>, pair<int, string>>> student;
int main(int argc, char **argv){

  cin >> n;

  for(int i=0; i<n; i++){
    student.push_back({{0,0},{0,""}});
    cin >> student[i].second.second >> student[i].second.first >> 
    student[i].first.second >> student[i].first.first;
  }

  sort(student.begin(), student.end()); // 년월일 순 정렬

  cout << student[n-1].second.second << "\n" << student[0].second.second;

  return 0;
}