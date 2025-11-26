// https://atcoder.jp/contests/abs/tasks/abc086_a

// Input: 2 int a, b
// Ouput: int product of a, b is even or odd

// 1 <= a, b <= 1000

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((a * b) % 2 == 0 ? "Even" : "Odd") << endl;
    return 0;
}
