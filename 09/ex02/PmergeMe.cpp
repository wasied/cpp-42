#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    std::srand(std::time(0));
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
    *this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
    return *this;
}

// Tri par insertion pour std::deque
void PmergeMe::insertionSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end) 
{
    for (std::deque<int>::iterator i = begin + 1; i != end; ++i) 
    {
        int key = *i;
        std::deque<int>::iterator j = i - 1;

        while (j >= begin && *j > key)
        {
            *(j + 1) = *j;
            --j;
        }

        *(j + 1) = key;
    }
}

// Merge-insert sort pour std::deque
void PmergeMe::mergeInsertSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end, int threshold) 
{
    int size = std::distance(begin, end);

    if (size <= threshold) 
    {
        insertionSortDeque(begin, end);
        return;
    }

    std::deque<int>::iterator middle = begin + size / 2;
    mergeInsertSortDeque(begin, middle, threshold);
    mergeInsertSortDeque(middle, end, threshold);

    std::inplace_merge(begin, middle, end);
}

// Merge-insert sort pour std::list
void PmergeMe::mergeInsertSortList(std::list<int>::iterator begin, std::list<int>::iterator end, int threshold) 
{
    int size = std::distance(begin, end);

    if (size <= threshold) 
    {
        insertionSortList(begin, end);
        return;
    }

    std::list<int>::iterator middle = begin;
    std::advance(middle, size / 2);
    mergeInsertSortList(begin, middle, threshold);
    mergeInsertSortList(middle, end, threshold);

    std::list<int> merged;
    std::merge(begin, middle, middle, end, std::back_inserter(merged));
    std::copy(merged.begin(), merged.end(), begin);
}

// Tri par insertion pour std::list
void PmergeMe::insertionSortList(std::list<int>::iterator begin, std::list<int>::iterator end) 
{
    for (std::list<int>::iterator i = ++begin; i != end; ++i) 
    {
        int key = *i;
        std::list<int>::iterator j = i;
        --j;

        while (j != begin && *j > key) 
        {
            std::iter_swap(j, i);
            --j;
            --i;
        }

        if (*j > key)
        {
            std::iter_swap(j, i);
        }
    }
}