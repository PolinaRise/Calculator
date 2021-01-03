#include "number.hpp"

template <typename T> 
Number<T> Number<T>::operator+(const Number<T>&rv) {
    return (this->_value + rv._value);
}

template <typename T> 
Number<T> Number<T>::operator-(const Number<T>&rv) {
    return (this->_value - rv._value);
}

template <typename T> 
Number<T> Number<T>::operator*(const Number<T>&rv) {
    return (this->_value * rv._value);
}

template <typename T> 
Number<T> Number<T>::operator/(const Number<T>&rv) {
    return (this->_value / rv._value);
}