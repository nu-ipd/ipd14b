#include <iostream>

struct Posn
{
    // fields? "data members" or "member variables":
    double x, y;
};

std::ostream&
operator<<(std::ostream& out, Posn p)
{
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

struct Circle
{
    double radius;
    Posn center;
};

int
main()
{
    Circle my_circle{10, {3, 4}};

    std::cout << "my_circle is ";
    std::cout << "Circle{radius: " << my_circle.radius    // move these 2 lines
              << ", center: " << my_circle.center << "}"; // into operator<<
    std::cout << "\n";
}
