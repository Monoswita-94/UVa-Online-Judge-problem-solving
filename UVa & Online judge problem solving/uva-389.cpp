#include <iostream>
#include <string>
using namespace std;
long long toDecimal(string num, int base) {
    long long res = 0;
    long long power = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        int digit;
        if (num[i] >= '0' && num[i] <= '9') {
            digit = num[i] - '0';
        } else {
            digit = num[i] - 'A' + 10;
        }
        if (digit >= base) {
            return -1;
        }
        res += digit * power;
        power *= base;
    }
    return res;
}
string fromDecimal(long long num, int base) {
    if (num == 0) {
        return "0";
    }
    string res = "";
    while (num > 0) {
        int rem = num % base;
        char ch;
        if (rem < 10) {
            ch = rem + '0';
        } else {
            ch = rem - 10 + 'A';
        }
        res = ch + res;
        num /= base;
    }
    if (res.length() > 7) {
        return "ERROR";
    }
    return res;
}

int main() {
    string num;
    int fromBase, toBase;

    while (cin>>num>>fromBase>>toBase) {
        long long decimal = toDecimal(num, fromBase);
        string result = fromDecimal(decimal, toBase);
        int padding = 7 - result.length();
        if (padding < 0) {
            result = "ERROR";
            padding = 0;
        }
        cout << string(padding, ' ') << result << endl;
    }

    return 0;
}

