//part-1
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

//part-2
#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n = 2000;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> res; 
    
    int sum = 0; 
    for (int i = 0; i < n - 2; i++) {
        for (int j = i; j < (i + 3); j++) {
            sum += a[j];
        }

        res.push_back(sum);
        sum = 0;
    }

    // for (int i = 0; i < res.size(); i++) {
    //     cout << res[i] << '\n';
    // }

    int ans = 0;
    for (int i = 1; i < res.size(); i++) {
        if (res[i] > res[i - 1]) ans++;
    }
    cout << ans << '\n';
}
