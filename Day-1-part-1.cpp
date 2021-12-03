#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n = 2000;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) ans++;
    }
    cout << ans << '\n';
}