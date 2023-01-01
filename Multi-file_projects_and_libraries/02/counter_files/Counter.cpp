#include "Counter.h"

Counter::Counter(int value) : value_(value)
{
    value_ = value;
}

Counter::~Counter() {}

void Counter::set(int initial_value)
{
    if (initial_value > 0)
    {
        value_ = initial_value;
    }
}

void Counter::add()
{
    ++value_;
}
void Counter::reduce()
{
    --value_;
}

int  Counter::get()
{
    return (value_);
}