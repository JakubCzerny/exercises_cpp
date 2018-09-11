#include <iostream>
#include <cmath>

using namespace std;

double pi(int n){
  double sum = 0;
  const int COEF = 4;

  for(int i=0; i<n; i++){
    sum = sum + pow(-1,i) / (2*i+1);
  }

  return sum * COEF;
}

main()
{
  int n;

  cin >> n;
  cout << pi(n) << endl;

  return 0;
}
