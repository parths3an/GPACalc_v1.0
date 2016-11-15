#include<iostream>
#include<iostream>
#include "Class_info.h"
#include<vector>

using namespace std;

int main()
{
Class_info c1("CSE 12", "A", 4.0);
vector<Class_info> v1;
v1.push_back(c1);
Class_info c2("CSE 15L", "B", 2.0);
//cout << v1[0];
v1.push_back(c2);
for(int i=0; i<v1.size(); i++)
{
cout << v1[i] << endl;
}
return 0;
}
