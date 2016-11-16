#include "Class_info.h"
#include <sstream>   //will allow you to use use ostringstream
#include<vector>

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



string Class_info::doubleTo_string(double db1)
{
    ostringstream doubletoString;
    doubletoString << db1;
    string temp_string = doubletoString.str();
    return temp_string;
}

/*
Super HOT: So, the right side of the << operator has to be a string
or an array of a character.
*/

std::ostream& operator<<(std::ostream& out,Class_info &ciObj)
{
    out<< ciObj.getCname() << "  " << ciObj.getCgrade() << "  "<<ciObj.getCunits() << endl;
    return out;

}
