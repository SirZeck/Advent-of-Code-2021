#include <bits/stdc++.h>
using namespace std;

int main () {
  int n = 1000;
  vector<string> s(n);
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i] >> a[i];
  }

  int x = 0, y = 0, aim = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == "forward") {
      x += a[i];
      if (aim != 0) y += aim*a[i];
    }
    else if (s[i] == "down") aim += a[i];
    else if (s[i] == "up") aim -= a[i];
  }

  cout << x << ' ' << y << ' ' << aim << '\n';
  cout << 1ll * x * y << '\n';
}