#include <iostream>

using namespace std;

main()
{
  double x;
  double y;
  double z;
  double output;

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

  cin >> z;
  while(cin.fail()){
    cin.clear();
    cin.ignore(256, '\n');
    cin >> z;
  }

  output = ( x + y ) - z;
  cout << output << endl;

  return 0;
}
