#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long int;

const ll mod = 1e9 + 7;

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans = max({a * c, a * d, b * c, b * d});
  cout << ans << endl;
}
