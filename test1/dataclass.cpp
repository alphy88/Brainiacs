#include "dataclass.h"
#include <iostream>


DataClass::DataClass()
{

}

void DataClass::PrintSomething()
{
    std::cout << this << std::endl;
}
