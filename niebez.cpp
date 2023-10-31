#include <iostream>
#include <memory>

void foo(std::shared_ptr<int> ptr) {
    std::cout << *ptr << std::endl;
    *ptr = 20;
    std::cout << *ptr << std::endl;
    std::cout << ptr.use_count() << std::endl;
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    foo(number);
    return 0;
}