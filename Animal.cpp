/*
Author: Asmita Subedi
Roll no: 0346"A"
Creating own class: Animal Class
*/

#include<iostream>
#include <string>
#include "Animal.h"
using namespace std;

Animal::Animal( string type, string name, string color)
{
    setType(type);
    setName(name);
    setColor(color);
}

Animal::~Animal()
{
    cout << endl << "Object " << name << " Destroyed."<<endl;
}
// setFunctions
void Animal::setType(string a_type)
{
    type = a_type;
}
void Animal::setName(string a_name)
{
    name = a_name;
}
void Animal::setColor(string a_color)
{
    color = a_color;
}
//getFunctions
string Animal::getType()
{
    return type;
}
string Animal::getName()
{
    return name;
}
string Animal::getColor()
{
    return color;
}
// display
void Animal::displayMsg()
{
    cout << endl <<getName()<< " is a " << getType() << " animal which has " << getColor() <<" color." << endl;
}



