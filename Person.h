#pragma once
#include <string>
using namespace std;
class Person
{
private:

    int age;
    int pID;
    string name;
    string address;
    string phone;
    string gender;

public:
    static int ID;
    Person();
};