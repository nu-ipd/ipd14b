#include <member_functions.hxx>

#include <catch.hxx>

// TODO:
// Declare and define the two member functions necessary for the test
// cases here to be uncommented and still pass. The member functions are:
//
//   - void Circle::scale_by(double factor);
//
//   - void Circle::operator==(Circle other) const;
//

TEST_CASE("scale circle by 4")
{
    Posn   center{100, -6};
    Circle actual{5, center},
           expected{20, center};

    // actual.scale_by(4);
    //
    // CHECK(actual == expected);
}

TEST_CASE("scale circle by 0.5")
{
    Posn   center{-100, -6.2};
    Circle actual{8, center},
           expected{4, center};

    // actual.scale_by(0.5);
    //
    // CHECK(actual == expected);
}
