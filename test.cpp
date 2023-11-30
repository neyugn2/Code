#include <bits/stdc++.h>

using namespace std;

string operator + (string a, string b)
{
    while(a.size() < b.size())
        a = '0' + a;
    while(a.size() > b.size())
        b = '0' + b;
    string c = "";
    int carry = 0;
    for(int i = a.size() - 1; i >= 0; i--)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + carry;
        carry = tmp / 10;
        tmp %= 10;
        c = char(tmp + 48) + c;
    }
    if(carry == 1) c = '1' + c;
    return c;
}

string fibo(int n) {
    string a = "1", b = "2", c ="";
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) cout << 1 << "\n";
        else if (n == 2) cout << 2 << "\n";
        else cout << fibo(n) << "\n";

    }
    return 0;
}
