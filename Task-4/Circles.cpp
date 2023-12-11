#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

string circlesIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    double radius1 = distance(x1, y1, x2, y2) / 2;
    double centerX1 = (x1 + x2) / 2;
    double centerY1 = (y1 + y2) / 2;

    double radius2 = distance(x3, y3, x4, y4) / 2;
    double centerX2 = (x3 + x4) / 2;
    double centerY2 = (y3 + y4) / 2;

    double distanceBetweenCenters = distance(centerX1, centerY1, centerX2, centerY2);
    double sumOfRadii = radius1 + radius2;

    return (distanceBetweenCenters <= sumOfRadii) ? "YES" : "NO";
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    std::string result = circlesIntersect(x1, y1, x2, y2, x3, y3, x4, y4);
    std::cout << result << std::endl;

    return 0;
}
