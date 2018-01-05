// AssociationRelationship.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ostream>

#include "Patient.h"
#include "Doctor.h"


int main()
{
    Patient* p1 = new Patient("Dave");
    Patient* p2 = new Patient("John");
    Patient* p3 = new Patient("Helgi");
    Patient* p4 = new Patient("Fjorir");

    Doctor* d1 = new Doctor("JamesDoc");
    Doctor* d2 = new Doctor("MadDoc");

    d1->AddPatient(p1);
    d2->AddPatient(p2);
    d1->AddPatient(p3);

    std::cout << *d1 << '\n';

    std::cin.get();
    return 0;
}

