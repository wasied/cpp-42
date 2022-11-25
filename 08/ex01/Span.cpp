#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _arr(new int[n]), _size(0) {}

Span::Span(Span const& src) : _n(src._n), _arr(new int[src._n]), _size(src._size)
{
    for (unsigned int i = 0; i < _size; i++)
        _arr[i] = src._arr[i];
}

Span::~Span(void)
{
    delete[] _arr;
}

Span& Span::operator=(Span const& rhs)
{
    if (this != &rhs)
    {
        this->_n = rhs._n;
        this->_size = rhs._size;
        delete[] this->_arr;
        
        this->_arr = new int[_n];
        for (unsigned int i = 0; i < this->_size; i++)
            this->_arr[i] = rhs._arr[i];
    }
    return *this;
}

void    Span::addNumber(int n)
{
    if (this->_size == this->_n)
        throw ContainerFullException();
    this->_arr[this->_size++] = n;
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_size + (end - begin) > this->_n)
        throw ContainerFullException();
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        this->_arr[this->_size++] = *it;
    }
}

int     Span::shortestSpan(void)
{
    if (this->_size < 2)
        throw TooFewElementsException();

    std::vector<int>    v(this->_arr, this->_arr + this->_size);
    std::sort(v.begin(), v.end());

    std::vector<int>::iterator  it = v.begin();
    int                         min = INT_MAX;
    int                         tmp;

    while (it != v.end() - 1)
    {
        tmp = *(it + 1) - *it;
        if (tmp < min)
            min = tmp;
        it++;
    }
    return min;
}

int     Span::longestSpan(void)
{
    if (this->_size < 2)
        throw TooFewElementsException();

    std::vector<int>    vec(this->_arr, this->_arr + this->_size);
    std::sort(vec.begin(), vec.end());

    return vec.back() - vec.front();
}