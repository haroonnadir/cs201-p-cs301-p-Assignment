// MUHAMMAD UBAID ULLAH
//BC230412688
#include<iostream>
#include<string>
using namespace std;
int sumOfEvenDigits(string numericID)
{
int sum = 0;
cout<<"Even digit: ";
for(size_t i = 0; i < numericID.length(); ++i)
{
int num = numericID[i] - '0';
if (num % 2 == 0) {
sum += num;
cout<< num << " ";
}
}
cout<< endl;
return sum;}
int main() {
string vuStudentID = "BC230412688"; //enter your own VUID here
cout<< "VU Student ID: " << vuStudentID << endl;
string numericID = vuStudentID.substr(2);
cout<< " Numeric Part of VU Student ID: " << numericID << endl;
int sum = sumOfEvenDigits(numericID);
cout << "Sum of even digits: " << sum << endl;
return 0;
}

