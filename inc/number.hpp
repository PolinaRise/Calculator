#ifndef NUMBER_H
#define NUMBER_H

/*
 * @class Number 
 * @brief A class which guarantees + - * / interfaces
 */
template <typename numtype>
class Number
{
    numtype _value;
public:
    Number(numtype value);

    Number operator+ (const Number &rv);
    Number operator- (const Number &rv);
    Number operator* (const Number &rv);
    Number operator/ (const Number &rv);

    ~Number() = default;
};

template <typename numtype>
constexpr Number<numtype> nil = 0;

template <typename numtype>
constexpr Number<numtype> one = 1;

#endif // NUMBER_H