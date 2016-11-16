#ifndef CLASS_INFO_H
#define CLASS_INFO_H
#include<string>
#include<vector>

using namespace std;
class Class_info
{
    public:
        //Default constructor
        Class_info();

        //overaloded Constructor
        Class_info(string, string, double);

        //Destructor
        ~Class_info();

        //accessor Function
        string getCname();
        string getCgrade();
        string getCunits();

        //To convert the double values to String for the overloaded operator
        string doubleTo_string(double);

        //<< operator overaloding
       friend std::ostream& operator<<(std::ostream&,Class_info &);

    protected:
    vector<Class_info>classInfo_vector;


    private:
    string class_name;
    string class_grade;
    double class_units;

};

#endif // CLASS_INFO_H
