#include <iostream>
#include <string>
#include "Person.h"

Person::Person(){
    this->age=0;
    this->pID=0;
    this->name= "";
    this->address= "";
    this->phone= "";
    this->gender= "";
}
int Person::ID=100;

int main()
{

    return 0;
}