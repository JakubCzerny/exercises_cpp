#include <iostream>

using namespace std;

main()
{
  int n;
  int sum = 0;

  cin >> n;
  while(cin.fail()){
    cin.clear();
    cin.ignore(256, '\n');
    cin >> n;
  }

  for(int i=0; i<=n; i++){
    sum = sum + i;
  }
  cout << sum << endl;

  return 0;
}
