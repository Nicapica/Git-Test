#include <iostream>
using namespace std;

int sum(int n){
  int answer = 0;
  for( int i = 0; i <= n; i++){
    answer += i;
  }
  return answer;
}

int main() {
  int n = 0;
  cout << "please input a number" << endl;
  cin >> n;
  cout << sum(n) << endl;
  return 0;
}
