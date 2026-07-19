#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, b, m;
    int ans = 0;

    cin >> n, b, m;

    vector<vector<int>> friends(n + 1, (vector<int>(n + 1, 0)));
    vector<bool> vistited(n + 1);
    vector<bool> hasBoat(n + 1);

    for (int i = 0; i < b; i++) {
        int t;
        cin >> t;

        hasBoat[t] = true;
    }

    for (int i = 0; i < m; i++) {
        int x, y;

        cin >> x >> y;

        friends[x][y] = 1;
    }
}

// okay this is a graph problem

// we can build each connection manually I believe?

// okay, we have each connection hopefully... the graph has been created

// we made the people who have a boat true and we made the friends true now

// from here lets make a loop s.t. we go through each connection
// of 'friends' and check if either of them have a boat