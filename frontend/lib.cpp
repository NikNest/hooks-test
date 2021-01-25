#include "lib.hpp"

A::A() { std::cout << "A constructor\n"; }

void A::store(int val) { this->value = val; }

void A::print() { std::cout << std::to_string(this->value) << std::endl; }