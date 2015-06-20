#include "iostream"
#include "circle.cpp"
#include "rectangle.cpp"
#include "shape.cpp"

using namespace std;

int main() {
    Shape shapes[10];

    for (int i = 0; i < 10; i++){
        if (i % 2)
            shapes[i] = Circle(5);
        else
            shapes[i] = Rectangle(10, 10);

        cout << shapes[i].getArea();
    }

    return 0;
}