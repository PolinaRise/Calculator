#ifndef OPERATION_H
#define OPERATION_H

#include "number.hpp"

template <typename T>
class Operation
{
public:
    virtual Number<T> operator()(const Number<T> &rv) = 0;
    virtual Number<T> operator()(const Number<T> &lv, const Number<T> &rv) = 0;
    virtual ~Operation() = default;
};

template <typename T>
class AddOperation
{
public:
    Number<T> operator()(const Number<T> &rv) override;
    Number<T> operator()(const Number<T> &lv, const Number<T> &rv) override;
    ~AddOperation() = default;
};

template <typename T>
class SubOperation
{
public:
    Number<T> operator()(const Number<T> &rv) override;
    Number<T> operator()(const Number<T> &lv, const Number<T> &rv) override;
    ~SubOperation() = default;
};

template <typename T>
class MulOperation
{
public:
    Number<T> operator()(const Number<T> &rv) override;
    Number<T> operator()(const Number<T> &lv, const Number<T> &rv) override;
    ~MulOperation() = default;
};

template <typename T>
class DivOperation
{
public:
    Number<T> operator()(const Number<T> &rv) override;
    Number<T> operator()(const Number<T> &lv, const Number<T> &rv) override;
    ~DivOperation() = default;
};

#endif // OPERATION_H