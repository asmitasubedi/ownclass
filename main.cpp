#include<iostream>
#include"Animal.h"
using namespace std;

int main()
{
    Animal animaltyp1("Domestic", "Cat", "White");
    Animal animaltyp2("Wild", "Lion", "Brown");
    animaltyp1.displayMsg();
    animaltyp2.displayMsg();
}
