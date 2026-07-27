#include <iostream>
#include <numeric>

using namespace std;

bool check(int a, int n, int b, int m) {
    int temp = gcd(n, m);
    int p, q = 0;

    p = a % temp;
    q = b % temp;

    if (p == q) {
        return true;
    }

    return false;
}

int main() {
    int numCase;

    cin >> numCase;

    for(int i = 0; i < numCase; i++) {
        int a, n, b, m;
        int x, k = 0;
        cin >> a >> n >> b >> m;

        k = lcm(n, m);

        if(check(a, n, b, m)) {

        }
        else {
            cout << "no solution";
            continue;
        }
    }
}