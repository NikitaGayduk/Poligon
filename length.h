#ifndef LENGTH_H
#define LENGTH_H
#include <iostream>


class Length
{
    int meter;
    int centimeter;
public:
    Length();
    Length(int, int);
    void showData();
    Length operator+(Length) const;
};

#endif // LENGTH_H
