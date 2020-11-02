#include "constructors.hxx"

#include <catch.hxx>

#include <cmath>


TEST_CASE("Circle::area() const")
{
    Posn   questionable;
    Circle very_questionable{-1, questionable};

    CHECK(very_questionable.area() == M_PI);
}
