#include "Class_info.h"
#include<sstream>   //will allow you to use use ostringstream
#include<vector>
#include<iostream>  //For standard stod function.
#include<string>
#include<cstdlib>



using namespace std;

Class_info::Class_info()
{
    class_name = "default";
    class_grade= 'A';
    class_units=4.0;
}

Class_info::~Class_info()
{
    //dtor
}

Class_info::Class_info(string temp_name, string temp_grade, double temp_units)
{
  class_name = temp_name;
  class_grade = temp_grade;
  class_units = temp_units;
}

string Class_info::getCname()
{
    return class_name;
}

string Class_info::getCgrade()
{
    return class_grade;
}

string Class_info::getCunits()
{
    return doubleTo_string(class_units);
}

double Class_info::getCunitsDouble()
{
    return class_units;
}

double Class_info::getCgradeDouble()
{
    string tempGrade;
    tempGrade = class_grade;

    if(tempGrade == "A"  || tempGrade == "a")
    {
     return 4.0;
    }
    else if(tempGrade == "B" || tempGrade == "b")
    {
     return 3.0;
    }
    else if(tempGrade == "C"  || tempGrade == "c")
    {
     return 2.0;
    }
    else if(tempGrade == "D" || tempGrade == "d")
    {
    return 1.0;
    }
    else if (tempGrade == "F" || tempGrade == "f")
    {
     return 0.0;
    }
    else
    {
    //To check for wrong grade input
    return -99999; //To show the wrong user input.
    }
}                             //End fun def.


string Class_info::doubleTo_string(double db1)
{
    ostringstream doubletoString;
    doubletoString << db1;
    string temp_string = doubletoString.str(); //Using inbuilt function.
    return temp_string;
}


double stringTo_double(string s1)
{
//Using standard library function to convert from string to a double.
s1="3.5";
double temp_double = atof("3.5");
return temp_double;
}


/*
Super HOT: So, the right side of the << operator has to be a string
or an array of a character.
In order to print the element of this class, you can jsut create vector in the child class
and use << operator to display the value of the member function of the the class_info class
in the vector.
*/

std::ostream& operator<<(std::ostream& out,Class_info &ciObj)
{
    out<< ciObj.getCname() << "  " << ciObj.getCgrade() << "  "<<ciObj.getCunits() << endl;
    return out;

}
