#include "span.hpp"

Span::Span(unsigned int n) :_n(n)
{
}

Span::Span(const Span& ref) : _n(ref._n), _v(ref._v)
{
}

Span& Span::operator=(const Span& ref)
{
    if (this == &ref)
        return (*this);
    *this = Span(ref);
    return (*this);
}

Span::~Span()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::vector<int>    Span::getVector()
{
    return (_v);
}

void                Span::addNumber(int value)
{
    if (_v.size() >= _n)
        throw Span::NoSpaceException();
    _v.push_back(value);
}

void				 Span::addNumber(it begin, it end)
{
	if (this->_v.size() + std::distance(begin, end) > this->_n)
        throw Span::NoSpaceException();
	this->_v.insert(_v.end(), begin, end);
}


unsigned int        Span::longestSpan()
{
    if (_v.size() < 2)
        throw Span::NoSpanException();
    int min = *std::min_element(_v.begin(), _v.end());
    int max = *std::max_element(_v.begin(), _v.end());
    return (max - min);
}

unsigned int        Span::shortestSpan()
{
    if (_v.size() < 2)
        throw Span::NoSpanException();

    std::vector<int> v(_v);
    std::vector<int> span(_v.size());

    std::sort(v.begin(), v.end());
    std::adjacent_difference(v.begin(), v.end(), span.begin());
	std::sort(span.begin()+1, span.end());
    return (span[1]);
}

const char* Span::NoSpaceException::what() const throw()
{
    return ("No Space Exception.");
}

const char* Span::NoSpanException::what() const throw()
{
    return ("No Span Exception.");
}