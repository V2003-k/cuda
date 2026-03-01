#include <iostream>
using namespace std;

typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point p1 = {1.1, 2.5};
    cout << "size of Point: " << sizeof(Point) << endl;
}