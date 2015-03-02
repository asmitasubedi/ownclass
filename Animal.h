/*
Author: Asmita Subedi
Roll no: 0346"A"
Creating own class: Animal Class
*/

#include <string>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
 public:
        Animal( string type="", string name="", string color="");
        ~Animal();
        void setType(string a_type);
        void setName(string a_name);
        void setColor(string a_color);
        string getType();
        string getName();
        string getColor();
        void displayMsg();

 private:
        string type;
        string name;
        string color;

 };

#endif // ANIMAL_H


