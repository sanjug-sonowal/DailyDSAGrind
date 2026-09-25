#include <iostream>
using namespace std;

int main() {
    int n = 11;

    double cx = (n - 1) / 2.0;
    double cy = (n - 1) / 2.0;
    double radius = n / 2.0;
    double thickness = 0.5;

    double innerRadius = radius - thickness;
    double outerRadius = radius + thickness;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            double dx = i - cx;
            double dy = j - cy;

            double distanceSquared = dx * dx + dy * dy;

            if (distanceSquared >= innerRadius * innerRadius &&
                distanceSquared <= outerRadius * outerRadius) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}