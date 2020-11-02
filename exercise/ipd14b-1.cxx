#include "ipd14b-1.hxx"

std::ostream&
operator<<(std::ostream& out, Posn p)
{
    return out << "(" << p.x << ", " << p.y << ")";
}
