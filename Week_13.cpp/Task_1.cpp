#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

struct Point {
    double x;
    double y;


    Point() {
        this->x = 0.0;
        this->y = 0.0;
    }

    Point(const double &x,const double &y) {
        this->x = x;
        this->y = y;
    }

    void printPoint() {
        cout << "(" << this->x << "," << this->y << ")";
    }
};

struct Line {
    Point p1, p2;

    Line() {
        this -> p1 = Point();
        this -> p2 = Point();
    }

    Line(Point p1, Point p2) {
        this -> p1.x = p1.x;
        this -> p1.y = p1.y;
        this -> p2.x = p2.x;
        this -> p2.y = p2.y;
    }

    bool isEqualDistance(Line other) {

    }

    double distance() {
        return sqrt(pow(this -> p1.x - this -> p2.x,2) + pow(this -> p1.y - this -> p2.y,2));;
    }

    void printLine() {
        cout << "P1:";
        p1.printPoint();
        cout << ", P2:";
        p2.printPoint();
        cout << " - " << this->distance();
        cout << endl;
    }
};

struct Triangle {
    Line l1,l2,l3;

    Triangle() {
        this -> l1 = Line();
        this -> l2 = Line();
        this -> l3 = Line();
    }

    /*Triangle(Line l1, Line l2, Line l3) {

    }*/
};

int main() {
    Point p1,p2(2,2);
    Line t(p1,p2);
    t.printLine();
    return 0;
}
