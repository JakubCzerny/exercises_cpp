#include <iostream>
#include <vector>

using namespace std;

int factorize(int n){
  if( n==1 ){
    return 1;
  } else {
    for(int i=2; i<=n; i++){
      if(n % i == 0){
        return i;
      }
    }
  }
}

main(){
  int n;
  int factor;
  vector<int> factors;

  cin >> n;
  while(cin.fail()){
    cin.clear();
    cin.ignore(256, '\n');
    cin >> n;
  }

  factor = factorize(n);
  n = int(n/factor);
  factors.insert(factors.end(), factor);
  cout << factor;

  while(n > 1){
    factor = factorize(n);
    n = int(n/factor);

    if(factor != 1){
      factors.insert(factors.end(), factor);
      cout << " * " << factor;
    }
  }
  cout << endl;

  // Iterate over vector
  // for(int i=0; i<factors.size(); ++i)
  //   cout << factors[i] << ' ';

  return 0;
}
