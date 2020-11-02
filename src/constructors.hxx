#pragma once

#include <iostream>

// Represents a point on the 2-D Euclidean plane.
struct Posn
{
    double x, y;

    // Computes the distance between two `Posn`s
    double distance_to(Posn other) const;
};

// Stream insertion for `Posn`.
std::ostream&
operator<<(std::ostream& out, Posn p);

// Represents a circle on the 2-D Euclidean plane.
struct Circle
{
    double radius;
    Posn center;

    // Computes the area of this circle.
    double area() const;

    // Determines whether two circles overlap.
    bool overlaps(Circle other) const;
};
