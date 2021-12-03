#include <bits/stdc++.h>
using namespace std;

int main () {
    int n = 1000;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    // for (int i = 0; i < n; i++)
    //     cout << s[i] << '\n';

    // vector<vector<char>> a(s.size(), vector<char> (s[0].size(), '0'));

    // for (int i = 0; i < s.size(); i++) {
    //     for (int j = 0; j < s[0].size(); j++) {
    //         a[i][j] = s[i][j];
    //     }
    // }

    // for (int i = 0; i < s.size(); i++) {
    //     for (int j = 0; j < s[0].size(); j++) {
    //         cout << a[i][j];
    //     }
    //     cout << '\n';
    // }

    vector<vector<char>> b(s[0].size(), vector<char> (s.size(), '0'));

    for (int i = 0; i < s[0].size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            b[i][j] = s[j][i];
        }
    }

    // for (int i = 0; i < s[0].size(); i++) {
    //     for (int j = 0; j < s.size(); j++) {
    //         cout << b[i][j];
    //     }
    //     cout << '\n';
    // }

    vector<int> gamma(s[0].size()), epsilon(s[0].size());
    
    for (int i = 0; i < s[0].size(); i++) {
        int zeros = 0, ones = 0;
        for (int j = 0; j < s.size(); j++) {
            if (b[i][j] == '0') zeros++;
            else ones++;
        }

        if (zeros > ones) {
            gamma[i] = 0;
            epsilon[i] = 1;
        } else {
            gamma[i] = 1, epsilon[i] = 0;
        }
    }

    for (int i = 0; i < s[0].size(); i++)
        cout << gamma[i];

    cout << '\n';

    for (int j = 0; j < s[0].size(); j++)
        cout << epsilon[j];

    cout << '\n';
}