#ifndef PROGRESS_H
#define PROGRESS_H

#include <string>

class progress
{

public:

    progress()=delete;

    progress(const unsigned int& total, const unsigned int& width=10, const char& fill='='): _current{0}, _total{total}, _width{width}, _fill{fill}
    {
    }

    progress(const progress& another): _current{another._current}, _total{another._total}, _width{another._width}, _fill{another._fill}
    {
    }

    /*progress(progress&& another): _current{another._current}, _total{another._total}
    {
    }*/

    
    ~progress()
    {
    }

    /*************
     * Operators *
     ************/

    progress& operator=(const progress& another);

    //progress& operator=(progress&& another);

    /**********************
     * Accessor Functions *
     *********************/

    unsigned int current() const;

    unsigned int total() const;
    
    unsigned int width() const;

    char fill() const;

    void set_current(const unsigned int& current);

    void set_total(const unsigned int& total);

    void set_width(const unsigned int& width);

    void set_fill(const char& fill);

    /*******************
     * Other Functions *
     ******************/

    std::string to_string() const;

private:

    unsigned int _current; //the current value of progress

    unsigned int _total; //the total value that _current can reach

    unsigned int _width; //width of the progress bar

    char _fill;

};


/************************
 * Function Definitions *
 ***********************/

progress& progress::operator=(const progress& another) {
    _current = another.current();
    _total = another.total();
    _width = another.width();
    _width = another.fill();
    return *this;
}

unsigned int progress::current() const {
    return _current;
}

unsigned int progress::total() const {
    return _total;
}

unsigned int progress::width() const {
    return _width;
}

char progress::fill() const {
    return _fill;
}

void progress::set_current(const unsigned int& current) {
    _current = current;
}

void progress::set_total(const unsigned int& total) {
    _total = total;
}

void progress::set_width(const unsigned int& width) {
    _width = width;
}

void progress::set_fill(const char& fill) {
    _fill = fill;
}

std::string progress::to_string() const {
    std::string result;
    /************************************
     * (two) for box: []                *
     * (width) for fill: = (default)    *
     * (one) for space before % sign    *
     * (four) for percentage: %100      *
     ************************************/
    result.reserve(_width + 7);
    result.push_back('[');
    for(unsigned int i=0; i<_width*_current/_total; ++i) {
        result.push_back(_fill);
    }
    result.push_back(']');
    result.append(" %");
    result.append(std::to_string(100*_current/_total));
    return result;
}


#endif
