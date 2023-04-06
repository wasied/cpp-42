#include "RPN.hpp"

RPN::RPN(const std::string expr)
{
    DataStack splitted = splitBySpace(expr);
    
    // Reverse and push to _stack
    while (!splitted.empty()) {
        _stack.push(splitted.top());
        splitted.pop();
    }
}

RPN::RPN(RPN const &src)
{
    *this = src;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(RPN const &rhs)
{
    if (this != &rhs)
    {
        _stack = rhs._stack;
    }
    return *this;
}

DataStack RPN::splitBySpace(const std::string &input) 
{
    std::istringstream iss(input);
    DataStack tokens;
    std::string token;

    while (iss >> token)
    {
        tokens.push(token);
    }

    return tokens;
}

int RPN::getResult() const
{
    DataStack stack = _stack;
    DataStack result;

    while (!stack.empty())
    {
        std::string token = stack.top();
        stack.pop();

        bool isOperator = std::string("+-*/").find(token) != std::string::npos;
        if (!isOperator)
        {
            result.push(token);
        }
        else
        {
            if (result.size() < 2)
            {
                throw std::runtime_error("No enough operands");
            }

            int a = atoi(result.top().c_str());
            result.pop();
            int b = atoi(result.top().c_str());
            result.pop();

            std::stringstream res;

            if (token == "+")
                res << (b + a);
            else if (token == "-")
                res << (b - a);
            else if (token == "*")
                res << (b * a);
            else if (token == "/")
            {
                if (a == 0)
                    throw std::runtime_error("Cannot divide something by zero");
                res << (b / a);
            }
            result.push(res.str());
        }
    }

    if (result.size() != 1)
    {
        throw std::runtime_error("Stack is empty");
    }

    try 
    {
        int valueResult = atoi(result.top().c_str());
        return valueResult;
    }
    catch (std::exception &e)
    {
        throw std::runtime_error("Unable to convert result to int");
    }

    return (0);
}

std::ostream& operator<<(std::ostream& o, const RPN& rhs)
{
    std::stringstream   ss;

    try
    {
        int res = rhs.getResult();
        ss << res;
    }
    catch (std::exception &e)
    {
        ss << "Error";
    }

    o << ss.str();
    return o;
}