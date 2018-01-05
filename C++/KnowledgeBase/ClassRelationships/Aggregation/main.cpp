// Aggregation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ostream>

#include "Teacher.h"
#include "Department.h"



// To qualify as an aggregation, a whole object and its parts must have the following relationship:
// - The part(member) is part of the object(class)
// - The part(member) can belong to more than one object(class) at a time
// - The part(member) does not have its existence managed by the object(class)
// - The part(member) does not know about the existence of the object(class)

int main()
{
    Teacher* teacher = new Teacher("Jane");


    Department* dept = new Department(teacher);
    std::cout << "Teacher: " << dept->GetTeacherName() << std::endl;

    delete dept;

    std::cout << teacher->GetName() << " still exists" << std::endl;

    std::cin.get();
    return 0;
}

