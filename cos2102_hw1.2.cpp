#include <iostream>
#include <string>
using namespace std;
class Point {
private:
    static int count;
    float x;
    float y;
    string name;
public:
    Point();
    Point(float x, float y, string name);
    ~Point();
    static int getCount();

    void setX(float x);
    void setY(float y);
    void setName(string name);

    float getX();
    float getY();
    string getName();

    void show();
};
int Point::count = 0;
Point::Point() {
    x = 0.0;
    y = 0.0;
    name = "default";
    cout << "Default constructor " << name << endl;
    count++;
}
Point::Point(float x, float y, string name) : x(x), y(y), name(name) {
    cout << "Overloaded constructor " << name << endl;
    count++;
}
Point::~Point() {
    cout << "Destructor " << name << endl;
    count--;
}
int Point::getCount() {
    return count;
}
void Point::setX(float x) {
    this->x = x;
}
void Point::setY(float y) {
    this->y = y;
}
void Point::setName(string name) {
    this->name = name;
}
float Point::getX() {
    return x;
}
float Point::getY() {
    return y;
}
string Point::getName() {
    return name;
}
void Point::show() {
    cout << "Point " << name << ": (" << x << ", " << y << ")" << endl;
}
int main() {
    Point defaultPoint;
    defaultPoint.show();
    Point myPoint(2.0, 3.0, "myPoint");
    myPoint.show();
    myPoint.setX(5.0);
    myPoint.setY(6.0);
    myPoint.setName("newPoint");
    myPoint.show();

    cout << "X of myPoint: " << myPoint.getX() << endl;
    cout << "Y of myPoint: " << myPoint.getY() << endl;
    cout << "Name of myPoint: " << myPoint.getName() << endl;
    cout << "Number of objects created: " << Point::getCount() << endl;

    return 0;
}