#ifndef COUNT_H
#define COUNT_H

#include <stack>

#include "number.hpp"
#include "operation.hpp"

template <typename T>
Number<T> count (const std::stack<Number<T>>& numbers, const std::stack<Operation<T>>& operations);

#endif // COUNT_H