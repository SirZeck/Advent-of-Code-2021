#include <bits/stdc++.h>
using namespace std;

int main () {
    int n = 100;
    vector<vector<vector<int>>> mat(n, vector<vector<int>> (5, vector<int> (5, -1)));
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> mat[k][i][j];
            }
        }
    }

    /*vector<int> res{85,84,30,15,46,71,64,45,13,90,
    63,89,62,25,87, 68,73,47,65,78, 2,27,67,95,88,99,96,
    17,42,31, 91,98,57,28,38,93,43,0,55,49,22,24,82,54,59,
    52,3,26,9,32, 4,48,39,50,80,21,5,1,23,10,58,34,12,35,74,
    8,6,79,40,76,86,69,81,61, 14,92,97,19,7,51,33,11,77,75,20,
    70,29,36,60,18,56,37,72,41,94,44,83,66,16,53
};*/


    // for (int k = 0; k < n; k++) {
    //     for (int i = 0; i < 5; i++) {
    //         for (int j = 0; j < 5; j++) {
    //             for (int p = 0; p < res.size(); p++)
    //             if (mat[k][i][j] == res[p]) mat[k][i][j] = -1;
    //         }
    //     }
    // }



    // for (int k = 0; k < n; k++) {
    //     cout << k << '\n';
    //     for (int i = 0; i < 5; i++) {
    //         for (int j = 0; j < 5; j++) {

    //             cout << mat[k][i][j] << ' ';
    //         }
    //         cout << '\n';
    //     }
    //     cout << '\n';
    // }    

    // vector<int> out{7, 15, 21,25,58,68,71, 77,81,87,90,93,95};

    // for (int k = 0; k < n; k++) {
    //     for (int p = 0; p < out.size(); p++) {
    //         if (k == out[p]) {
    //             // cout << k << '\n';
    //             for (int i = 0; i < 5; i++) {
    //                 for (int j = 0; j < 5; j++) {
    //                     cout << mat[k][i][j] << ' ';
    //                 }
    //                 cout << '\n';
    //             }
    //             cout << '\n';
    //         }
    //     }
    // }
}