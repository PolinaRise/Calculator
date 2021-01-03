#include "operation.hpp"

template <typename T>
Number<T> AddOperation<T>::operator()(const Number<T> &rv) {
    return nil + rv;
}

template <typename T>
Number<T> AddOperation<T>::operator()(const Number<T> &lv, const Number<T> &rv) {
    return lv + rv;
}

template <typename T>
Number<T> SubOperation<T>::operator()(const Number<T> &rv) {
    return nil - rv;
}

template <typename T>
Number<T> SubOperation<T>::operator()(const Number<T> &lv, const Number<T> &rv) {
    return lv - rv;
}

template <typename T>
Number<T> MulOperation<T>::operator()(const Number<T> &rv) {
    return one * rv;
}

template <typename T>
Number<T> MulOperation<T>::operator()(const Number<T> &lv, const Number<T> &rv) {
    return lv * rv;
}

template <typename T>
Number<T> DivOperation<T>::operator()(const Number<T> &rv) {
    return one / rv;
}

template <typename T>
Number<T> DivOperation<T>::operator()(const Number<T> &lv, const Number<T> &rv) {
    return lv / rv;
}