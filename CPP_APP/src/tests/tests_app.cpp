// tests/test_app.cpp
#include <cassert>
#include "../src/addition.cpp"

void test_add() {
    assert(add(1, 2) == 3);
    assert(add(1, -1) == 0);
}

int main() {
    test_add();
    return 0;
}
