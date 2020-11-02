#include "ipd15a-1.hxx"

std::ostream&
operator<<(std::ostream& out, Posn p)
{
    return out << "(" << p.x << ", " << p.y << ")";
}
