// https://atcoder.jp/contests/abs/tasks/abc081_a

// Input: string s string of marbles
//        each marble is s1, s2, s3 is either 1 or 0
// Output: int number of marbles that are 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '1') count++;
    }
    cout << count << endl;
    return 0;
}
