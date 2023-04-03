#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>
# include <cstdlib>

typedef std::stack<std::string> DataStack;

class RPN
{
    public:
        RPN(const std::string expr);
        RPN(RPN const &src);
        ~RPN();

        RPN &operator=(RPN const &rhs);

        int    GetResult() const;

    private:
        DataStack   splitBySpace(const std::string &expr);

    private:
        DataStack   _stack;
};

std::ostream& operator<<(std::ostream& o, const RPN& rhs);

#endif