#include<iostream>
using namespace std;

long F(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return F(n - 1) + F(n - 2);
}

int main() {
    int n;
    cin>> n;
    cout <<F(n);

    int F0 = 0, F1 = 1, Fn;

    for (int i = 2; i <= n; i++) {
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;
    }
	return 0;
}
