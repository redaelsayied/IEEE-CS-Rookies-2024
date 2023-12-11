#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent a rectangle
struct Rectangle {
    int x1, y1, x2, y2;
};

int commonArea(vector<Rectangle>& rectangles) {
    Rectangle common = rectangles[0];
    for (size_t i = 1; i < rectangles.size(); ++i) {
        common.x1 = max(common.x1, rectangles[i].x1);
        common.y1 = max(common.y1, rectangles[i].y1);
        common.x2 = min(common.x2, rectangles[i].x2);
        common.y2 = min(common.y2, rectangles[i].y2);
    }
    if (common.x1 < common.x2 && common.y1 < common.y2) {
        return (common.x2 - common.x1) * (common.y2 - common.y1);
    } else {
        return 0;
    }
}

int main() {
    int T;
    cin >> T; 

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N;
        cin >> N; 

        vector<Rectangle> rectangles(N);
        for (int i = 0; i < N; ++i) {
            cin >> rectangles[i].x1 >> rectangles[i].y1 >> rectangles[i].x2 >> rectangles[i].y2;
        }

        int result = commonArea(rectangles);
        cout << "Case #" << caseNum << ": " << result << endl;
    }

    return 0;
}
