#include "PmergeMe.hpp"

int main(int argc, char* argv[]) 
{
    if (argc < 2) 
    {
        std::cout << "Erreur: Veuillez fournir une séquence d'entiers positifs en argument." << std::endl;
        return 1;
    }

    std::deque<int> numbers_deque;
    for (int i = 1; i < argc; ++i) 
    {
        int number = std::atoi(argv[i]);
        if (number < 0) 
        {
            std::cout << "Erreur: Les arguments doivent être des entiers positifs." << std::endl;
            return 1;
        }
        numbers_deque.push_back(number);
    }

    std::list<int> numbers_list(numbers_deque.begin(), numbers_deque.end());

    PmergeMe pmerge_me;
    int threshold = 10; // this var will adjust the algorithm used to sort the list (if >10, merge sort, else insertion sort)

    std::clock_t start_time;
    std::clock_t elapsed_time;

    std::cout << "Before: ";
    for (std::deque<int>::iterator it = numbers_deque.begin(); it != numbers_deque.end(); ++it) 
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    start_time = std::clock();
    pmerge_me.mergeInsertSortDeque(numbers_deque.begin(), numbers_deque.end(), threshold);
    elapsed_time = std::clock() - start_time;

    std::cout << "After: ";
    for (std::deque<int>::iterator it = numbers_deque.begin(); it != numbers_deque.end(); ++it) 
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque: "
              << static_cast<double>(elapsed_time) * 1e6 / CLOCKS_PER_SEC << " us" << std::endl;

    start_time = std::clock();
    pmerge_me.mergeInsertSortList(numbers_list.begin(), numbers_list.end(), threshold);
    elapsed_time = std::clock() - start_time;

    std::cout << "Time to process a range of " << argc - 1 << " elements with std::list: "
              << static_cast<double>(elapsed_time) * 1e6 / CLOCKS_PER_SEC << " us" << std::endl;

    return 0;
}
