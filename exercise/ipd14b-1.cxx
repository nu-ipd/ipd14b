#include <member_functions.hxx>

int main()
{
    Circle c{10, {3, 4}};

    /*
     * TODO:
     * This code won't work until you've declared
     * operator<<(std::ostream&, Circle) in member_functions.hxx and defined it
     * in member_functions.cxx, so you should go do that. Then uncomment this
     * and try it:
     */

    // std::cout << c << "\n";
}
