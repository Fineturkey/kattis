#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n, totalWaste;
    cin >> m >> n;

    vector<int> numShop(n);
    vector<int> numNeed(m);

    for(int i = 0; i < n; i++) { cin >> numShop[i]; }
    for(int i = 0; i < m; i++) { cin >> numNeed[i]; }

    sort(numShop.begin(), numShop.end());
    sort(numNeed.begin(), numNeed.end());

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(numNeed[i] > numShop[j]) {
                j++;
            }
            else{
                totalWaste += numNeed[i] - numShop[j--];
                break;
            }
        }
    }

    cout << totalWaste;

    return 0;
}