#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int d, t, s;
  cin >> d >> t >> s;

  if (d <= s * t)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
