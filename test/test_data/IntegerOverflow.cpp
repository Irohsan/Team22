#include <deepstate/DeepState.hpp>
#include <climits>
using namespace deepstate;

DEEPSTATE_NOINLINE int ident1(int x) {
    return x;
}

DEEPSTATE_NOINLINE int ident2(int x) {
    return x;
}

TEST(SignedInteger, AdditionOverflow) {
    Symbolic<int> x;
    int y = ident1(x) + ident2(x);  // Can overflow!
    ASSERT_GE(y, 0)
            << "Found y=" << y << " was not always positive.";
}

TEST(SignedInteger, MultiplicationOverflow) {
    Symbolic<int> x;
    int y = ident1(x) * ident2(x);  // Can overflow!
    ASSERT_GE(y, 0)
            << x << " squared overflowed.";
}

