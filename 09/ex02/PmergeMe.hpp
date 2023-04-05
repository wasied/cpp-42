#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <deque>
# include <list>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <cstdlib>

class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(PmergeMe const &src);
        ~PmergeMe();

        PmergeMe &operator=(PmergeMe const &rhs);

        void insertionSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end);
        void mergeInsertSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end, int threshold);
        void insertionSortList(std::list<int>::iterator begin, std::list<int>::iterator end);
        void mergeInsertSortList(std::list<int>::iterator begin, std::list<int>::iterator end, int threshold);
};

#endif