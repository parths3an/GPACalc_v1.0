#include<iostream>
#include<iostream>
#include "Class_info.h"
#include<vector>
#include<iomanip>


using namespace std;

int main()
{

/*
This code is extremely important.
You will need this logic to calculate the GPA in the main verion GPA_Calc.
All the code in this main fill will be a part of a Calculate GPA function in
the main project.
The reason to put his code is here, is to test the logic and how I can implement
this calculation logic in the main prooject.
*/

vector<Class_info> v1;
double totalUnits = 0.0 ;
double totalReceivedCredit = 0;
double GPA = 0.0;
Class_info c1("CSE 12", "A", 4.0);
Class_info c2("CSE 15L", "B", 3.0);

v1.push_back(c1);
v1.push_back(c2);


for(unsigned int i=0; i<v1.size(); i++)
{
cout << "The classes you entered are: " << v1[i] << endl;
totalUnits += v1[i].getCunitsDouble();
totalReceivedCredit += (v1[i].getCgradeDouble() * v1[i].getCunitsDouble());
}

//Calcualte the GPA
GPA = totalReceivedCredit/totalUnits;
//Print the output to check the logic.
cout << "Total units enrolled in:  "  << setw(2) << fixed << setprecision(2) <<totalUnits
     << "\nTotal earned Credits:   "   << setw(6)   << setprecision(2) << totalReceivedCredit
     << "\nGPA is:" <<setw(23)
     << setprecision(2) <<GPA;


return 0;
}
