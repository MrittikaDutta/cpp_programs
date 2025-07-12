#include <set>
#include <climits>
#include <utility>

void solveSquares(int x_coordinates[], int y_coordinates[])
{
    int N;
    cin >> N;

    set<pair<int,int>> points;

    for (int i = 0; i < N; i++) {
        points.insert({x_coordinates[i], y_coordinates[i]});
    }

    int minSide = INT_MAX;

    for (auto p1 : points) {
        for (auto p2 : points) {
            if (p1 == p2) continue;

            int dx = p2.first - p1.first;
            int dy = p2.second - p1.second;

            // skip non-square rectangles and zero-length sides
            if (dx == 0 || dy == 0) continue;
            if (abs(dx) != abs(dy)) continue;

            int side = abs(dx);

            // bottom-left corner at p1:
            pair<int,int> p3 = {p1.first + dx, p1.second};
            pair<int,int> p4 = {p1.first, p1.second + dy};

            if (points.count(p3) && points.count(p4)) {
                if (side < minSide) {
                    minSide = side;
                }
            }
        }
    }

    if (minSide == INT_MAX) {
        cout << 0 << endl; // No square found
    } else {
        cout << minSide << endl;
    }
}
