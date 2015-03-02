/*
Author: Asmita Subedi
Roll no: 0346"A"
Creating own class: Animal Class
*/

#include<iostream>
#include"Animal.h"
using namespace std;

int main()
{
    string type;
    string name;
    string color;

    Animal animaltyp1;
    Animal *ptr_animaltyp2;
	Animal animaltyp2;
	ptr_animaltyp2=&animaltyp2;

    cout << "Enter the kind of animal:(D/W) ";
    cin >> type;
    animaltyp1.setType(type);

    cout << endl << "Enter name of the animal: ";
    cin >> name;
    animaltyp1.setName(name);

    cout << endl << "Enter color: ";
    cin >> color;
    animaltyp1.setColor(color);

    animaltyp1.displayMsg();

    ptr_animaltyp2->setType("Wild");
	ptr_animaltyp2->setName("Hippo");
	ptr_animaltyp2->setColor("Black");

    animaltyp2.displayMsg();
}
