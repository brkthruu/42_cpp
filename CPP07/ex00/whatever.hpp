#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void    swap(T& A, T &B)
{
    T   temp;

    temp = A;
    A = B;
    B = temp;
}

template <typename T>
T       &min(T& A, T& B)
{
    if (A >= B)
        return (B);
    return (A);
}

template <typename T>
T       &max(T& A, T& B)
{
    if (A <= B)
        return (B);
    return (A);
}

#endif