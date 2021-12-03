#include <bits/stdc++.h>
using namespace std;

int main () {
    int n = 1000;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    //start of seg
    vector<vector<char>> a(s.size(), vector<char> (s[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s[0].size(); j++) {
            a[i][j] = s[i][j];
        }
    }

    int zeros = 0, ones = 0; // number of zeros n ones

    for (int i = 0; i < s.size(); i++) {
        if (a[i][0] == '0') zeros++;
        else ones++;
    }

    cout << "0: " << ' ' << zeros << ' ' << ones << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s1;
    for (int i = 0; i < s.size(); i++) {
        if (a[i][0] == '1') {
            s1.push_back(s[i]);
        }
    }

    cout << "s1: " << s1.size() << '\n'; //size of next segment
    //end of segment


    //start of seg
    vector<vector<char>> a1(s1.size(), vector<char> (s1[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s1[0].size(); j++) {
            a1[i][j] = s1[i][j];
        }
    }

    int zeros1 = 0, ones1 = 0; // number of zeros n ones

    for (int i = 0; i < s1.size(); i++) {
        if (a1[i][1] == '0') zeros1++;
        else ones1++;
    }

    cout << "1: " << ' ' << zeros1 << ' ' << ones1 << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s2;
    for (int i = 0; i < s1.size(); i++) {
        if (a1[i][1] == '1') {
            s2.push_back(s1[i]);
        }
    }

    cout << "s2: " << s2.size() << '\n'; //size of next segment
    //end of segment



    //start of seg
    vector<vector<char>> a2(s2.size(), vector<char> (s2[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s2.size(); i++) {
        for (int j = 0; j < s2[0].size(); j++) {
            a2[i][j] = s2[i][j];
        }
    }

    int zeros2 = 0, ones2 = 0; // number of zeros n ones

    for (int i = 0; i < s2.size(); i++) {
        if (a2[i][2] == '0') zeros2++;
        else ones2++;
    }

    cout << "2: " << ' ' << zeros2 << ' ' << ones2 << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s3;
    for (int i = 0; i < s2.size(); i++) {
        if (a2[i][2] == '0') {
            s3.push_back(s2[i]);
        }
    }

    cout << "s3: " << s3.size() << '\n'; //size of next segment
    //end of segment



    //start of seg
    vector<vector<char>> a3(s3.size(), vector<char> (s3[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s3.size(); i++) {
        for (int j = 0; j < s3[0].size(); j++) {
            a3[i][j] = s3[i][j];
        }
    }

    int zeros3 = 0, ones3 = 0; // number of zeros n ones

    for (int i = 0; i < s3.size(); i++) {
        if (a3[i][3] == '0') zeros3++;
        else ones3++;
    }

    cout << "3: " << ' ' << zeros3 << ' ' << ones3 << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s4;
    for (int i = 0; i < s3.size(); i++) {
        if (a3[i][3] == '0') {
            s4.push_back(s3[i]);
        }
    }

    cout << "s4: " << s4.size() << '\n'; //size of next segment
    //end of segment


    //start of seg
    vector<vector<char>> a4(s4.size(), vector<char> (s4[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s4.size(); i++) {
        for (int j = 0; j < s4[0].size(); j++) {
            a4[i][j] = s4[i][j];
        }
    }

    int zeros4 = 0, ones4 = 0; // number of zeros n ones

    for (int i = 0; i < s4.size(); i++) {
        if (a4[i][4] == '0') zeros4++;
        else ones4++;
    }

    cout << "4: " << ' ' << zeros4 << ' ' << ones4 << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s5;
    for (int i = 0; i < s4.size(); i++) {
        if (a4[i][4] == '0') {
            s5.push_back(s4[i]);
        }
    }

    cout << "s5: " << s5.size() << '\n'; //size of next segment
    //end of segment



    //start of seg
    vector<vector<char>> a5(s5.size(), vector<char> (s5[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s5.size(); i++) {
        for (int j = 0; j < s5[0].size(); j++) {
            a5[i][j] = s5[i][j];
        }
    }

    int zeros5 = 0, ones5 = 0; // number of zeros n ones

    for (int i = 0; i < s5.size(); i++) {
        if (a5[i][5] == '0') zeros5++;
        else ones5++;
    }

    cout << "5: " << ' ' << zeros5 << ' ' << ones5 << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s6;
    for (int i = 0; i < s5.size(); i++) {
        if (a5[i][5] == '1') {
            s6.push_back(s5[i]);
        }
    }

    cout << "s6: " << s6.size() << '\n'; //size of next segment
    //end of segment


    //start of seg
    vector<vector<char>> a6(s6.size(), vector<char> (s6[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s6.size(); i++) {
        for (int j = 0; j < s6[0].size(); j++) {
            a6[i][j] = s6[i][j];
        }
    }

    int zeros6 = 0, ones6 = 0; // number of zeros n ones

    for (int i = 0; i < s6.size(); i++) {
        if (a6[i][6] == '0') zeros6++;
        else ones6++;
    }

    cout << "6: " << ' ' << zeros6 << ' ' << ones6 << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s7;
    for (int i = 0; i < s6.size(); i++) {
        if (a6[i][6] == '1') {
            s7.push_back(s6[i]);
        }
    }

    cout << "s7: " << s7.size() << '\n'; //size of next segment
    //end of segment


    //start of seg
    vector<vector<char>> a7(s7.size(), vector<char> (s7[0].size(), '0')); //convert string to 2d char array

    //input into 2d array
    for (int i = 0; i < s7.size(); i++) {
        for (int j = 0; j < s7[0].size(); j++) {
            a7[i][j] = s7[i][j];
        }
    }

    int zeros7 = 0, ones7 = 0; // number of zeros n ones

    for (int i = 0; i < s7.size(); i++) {
        if (a7[i][7] == '0') zeros7++;
        else ones7++;
    }

    cout << "7: " << ' ' << zeros7 << ' ' << ones7 << '\n'; //output number of ones n zeros

    //init next segment
    vector<string> s8;
    for (int i = 0; i < s7.size(); i++) {
        if (a7[i][7] == '0') {
            s8.push_back(s7[i]);
        }
    }

    cout << "s8: " << s8.size() << '\n'; //size of next segment
    //end of segment

    cout << s8[0] << '\n';
}


//     //start of seg
//     vector<vector<char>> a8(s8.size(), vector<char> (s8[0].size(), '0')); //convert string to 2d char array

//     //input into 2d array
//     for (int i = 0; i < s8.size(); i++) {
//         for (int j = 0; j < s8[0].size(); j++) {
//             a8[i][j] = s8[i][j];
//         }
//     }

//     int zeros8 = 0, ones8 = 0; // number of zeros n ones

//     for (int i = 0; i < s8.size(); i++) {
//         if (a8[i][8] == '1') zeros8++;
//         else ones8++;
//     }

//     cout << "8: " << ' ' << zeros8 << ' ' << ones8 << '\n'; //output number of ones n zeros

//     //init next segment
//     vector<string> s9;
//     for (int i = 0; i < s8.size(); i++) {
//         if (a8[i][8] == '0') {
//             s9.push_back(s8[i]);
//         }
//     }

//     cout << "s9: " << s9.size() << '\n'; //size of next segment
//     //end of segment


//     //start of seg
//     vector<vector<char>> a9(s9.size(), vector<char> (s9[0].size(), '0')); //convert string to 2d char array

//     //input into 2d array
//     for (int i = 0; i < s9.size(); i++) {
//         for (int j = 0; j < s9[0].size(); j++) {
//             a9[i][j] = s9[i][j];
//         }
//     }

//     int zeros9 = 0, ones9 = 0; // number of zeros n ones

//     for (int i = 0; i < s9.size(); i++) {
//         if (a9[i][9] == '0') zeros9++;
//         else ones9++;
//     }

//     cout << "9: " << ' ' << zeros9 << ' ' << ones9 << '\n'; //output number of ones n zeros

//     //init next segment
//     vector<string> s10;
//     for (int i = 0; i < s9.size(); i++) {
//         if (a9[i][9] == '1') {
//             s10.push_back(s9[i]);
//         }
//     }

//     cout << "s10: " << s10.size() << '\n'; //size of next segment
//     //end of segment

//     for (int i = 0; i < s10.size(); i++)
//         cout << s10[i] << '\n';

    
// }