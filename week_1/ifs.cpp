#include <iostream>

using namespace std;

main()
{
  int x;
  int y;

  cin >> x;
  while(cin.fail()){
    cin.clear();
    cin.ignore(256, '\n');
    cin >> x;
  }

  cin >> y;
  while(cin.fail()){
    cin.clear();
    cin.ignore(256, '\n');
    cin >> y;
  }

  if(x == y) {
    cout << x << " is equal to " << y << endl;
  } else if(x > y) {
    cout << x <<  " is bigger than " << y << endl;
  } else {
    cout << x << " is smaller than " << y << endl;
  }

  return 0;
}
