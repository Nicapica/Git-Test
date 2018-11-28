#include <iostream>
using namespace std;

int sum(int n){
  int answer = 0;
  for( int i = 0; i <= n; i++){
    answer += i;
  }
  return answer;
}

int product(int p){
  int product_answer = 0;
  for (int i = 1; i <= p; i++){
    product_answer *= i;
  }
  return product_answer;
}

int main() {
  int n = 0;
  int p = 0;
  cout << "please input a number" << endl;
  cin >> n;
  cout << sum(n) << endl;
  cout << "please input a new number" << endl;
  cin >> p;
  cout << product(p) << endl;
  return 0;
}
