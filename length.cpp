#include "length.h"

Length::Length():meter(0), centimeter(0)
{

}

Length::Length(int meter, int centimeter):meter(meter), centimeter(centimeter)
{

}

void Length::showData()
{
std::cout<<"Meter: "<<this->meter<<std::endl;
std::cout<<"Centimeter: "<<this->centimeter<<std::endl;
}

Length Length::operator+(Length x) const
{
int tmpMeter = this->meter + x.meter;
int tmpCentimeter = this->centimeter + x.centimeter;
return Length(tmpMeter, tmpCentimeter);
}
