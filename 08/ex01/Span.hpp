#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <limits.h>
# include <algorithm>
# include <vector>

class Span
{
    public:
        Span(unsigned int n);
        Span(Span const& src);
        ~Span(void);

        Span& operator=(Span const& rhs);

        void    addNumber(int n);
        void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int     shortestSpan(void);
        int     longestSpan(void);

        class ContainerFullException : public std::exception
        {
            public:
                virtual const char* what() const throw() 
                { 
                    return "Container is full";
                }
        };

        class TooFewElementsException : public std::exception
        {
            public:
                virtual const char* what() const throw() 
                { 
                    return "Too few elements to find distance";
                }
        };

    private:
        Span(void);
        unsigned int    _n;
        int*            _arr;
        unsigned int    _size;
};

#endif