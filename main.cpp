#include<iostream>
#include<iostream>
#include "Class_info.h"
#include<vector>

using namespace std;

int main()
{
vector<Class_info> v1;
double totalUnits = 0.0 ;
double totalReceivedCredit = 0;
double GPA = 0.0;
Class_info c1("CSE 12", "A", 4.0);
Class_info c2("CSE 15L", "A", 2.0);

v1.push_back(c1);
v1.push_back(c2);


for(unsigned int i=0; i<v1.size(); i++)
{
totalUnits += v1[i].getCunitsDouble();
totalReceivedCredit += (v1[i].getCgradeDouble() * v1[i].getCunitsDouble());
}

//Calcualte the GPA
GPA = totalReceivedCredit/totalUnits;
//Print the output to check the logic.
cout << "Total units enrolled in: "  << totalUnits << " \n Total earned Credits: " << totalReceivedCredit << "\n GPA is: " << GPA;


return 0;
}
