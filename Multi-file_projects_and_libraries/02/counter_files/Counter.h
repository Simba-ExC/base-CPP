#pragma once

class Counter
{
private:

    int value_ = 1;
public:
    Counter(int value);

    Counter(){}
    
    ~Counter();

    void set(int initial_value);
    void add();
    void reduce();
    int get();

};