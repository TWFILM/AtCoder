// https://atcoder.jp/contests/abs/tasks/practice_1
// Input: 3 int a, b, c and 1 string s
// Ouput: int sum of a, b, c and string s with a half-width break

// 1 <= a, b, c <= 1000
// 0 <= s.length <= 1000

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    string s;
    cin >> a;
    cin >> b >> c;
    cin >> s;
    cout << (a + b + c) << " " << s << endl;
    return 0;
}
