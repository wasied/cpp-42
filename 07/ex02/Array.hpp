#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T = int>
class Array
{
    public:
        Array(void) : _size(0) 
        {
            std::cout << "Array created with empty size" << std::endl;
            this->_array = new T[this->_size];
        }

        Array(unsigned int n) : _size(n)
        {
            std::cout << "Array created with size " << this->_size << std::endl;
            this->_array = new T[this->_size];
        }

        Array(const Array& src)
        {
            *this = src;
        }

        ~Array(void)
        {
            std::cout << "Array of size " << this->_size << " destructed" << std::endl;
            delete[] this->_array;
        }
    
        Array& operator=(const Array& rhs)
        {
            if (this != &rhs)
            {
                this->_size = rhs._size;
                this->_array = new T[this->_size];
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_array[i] = rhs._array[i];
            }
            return *this;
        }

        T& operator[](unsigned int index)
        {
            if (index >= this->_size)
                throw Array::OutOfRangeException();
            return this->_array[index];
        }

        T& operator[](unsigned int index) const
        {
            if (index >= this->_size)
                throw Array::OutOfRangeException();
            return this->_array[index];
        }

        unsigned int size(void) const
        {
            return this->_size;
        }

        class OutOfRangeException : public std::exception
        {
            public:
                virtual const char* what(void) const throw()
                { 
                    return "Out of range";
                }
        };

    private:
        T *             _array;
        unsigned int    _size;
};

template <typename T = int>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs)
{
    for (unsigned int i = 0; i < rhs.size(); i++)
        o << rhs[i] << " ";
    return o;
}

#endif