#include <iostream>
#include <cmath>
using namespace std;

int main ()

{
	string Bubbly = "Ooh A little bit of the Bubbly";
	
	double cg;
	int cred;
	string grade;
	string grade1;
	string grade2;
	string grade3;
	int no;
	int no1;
	int no2;
	int no3;
	
	cout << "                              NSU CGPA Calculator" << endl;
	cout << " Valid Grade Inputs include: A  A-  B+  B  B-  C+  C  C-  D+  D  D- \n";
	cout << " If you haven't taken a 4th course, please leave the input as 0 for Course 4 & Course 4 Credits \n";
	cout << " Please note, changing the Course Credit Numbers, or inputing a Non-numeric Value \n will cause the CGPA value calcualted to change \n";
	cout << " Current CGPA "; cin>> cg;
	cout << " Credits Finished "; cin>> cred;
	cout << " Course 1 "; cin>> grade;
	cout << " Course 1 Credits "; cin>> no;
	cout << " Course 2 "; cin>> grade1;
	cout << " Course 2 Credits "; cin>> no1;
	cout << " Course 3 "; cin>> grade2;
	cout << " Course 3 Credits "; cin>> no2;
	cout << " Course 4 "; cin>> grade3;
	cout << " Course 4 Credits "; cin>> no3;
	
	double result;
	double maga;
	int semcred;
	semcred = no + no1 + no2 + no3; 
	maga = (cg*cred);
	
	if (grade == "A"){
		result= 4*no;
	} else if (grade == "A-"){
		result= 3.7*no;
	} else if (grade == "B+"){
		result= 3.3*no;
	} else if (grade == "B"){
		result= 3.0*no;
	} else if (grade == "B-"){
		result= 2.7*no;
	} else if (grade == "C+"){
		result= 2.3*no;
	} else if (grade == "C"){
		result= 2.0*no;
	} else if (grade == "C-"){
		result= 1.7*no;
	} else if (grade == "D+"){
		result= 1.3*no;
	} else if (grade == "D"){
		result= 1.0*no;
	} else {
		result=0;
	}
	
	double result1;
	
	if (grade1 == "A"){
		result1= 4*no1;
	} else if (grade1 == "A-"){
		result1= 3.7*no1;
	} else if (grade1 == "B+"){
		result1= 3.3*no1;
	} else if (grade1 == "B"){
		result1= 3.0*no1;
	} else if (grade == "B-"){
		result1= 2.7*no1;
	} else if (grade == "C+"){
		result1= 2.3*no1;
	} else if (grade == "C"){
		result1= 2.0*no1;
	} else if (grade == "C-"){
		result1= 1.7*no1;
	} else if (grade == "D+"){
		result1= 1.3*no1;
	} else if (grade == "D"){
		result1= 1.0*no1;
	} else {
		result1=0;
	}
	
	double result2;
if (grade2 == "A"){
		result2= 4*no2;
	} else if (grade2 == "A-"){
		result2= 3.7*no2;
	} else if (grade2 == "B+"){
		result2= 3.3*no2;
	} else if (grade2 == "B"){
		result2= 3.0*no2;
	} else if (grade2 == "B-"){
		result2= 2.7*no2;
	} else if (grade2 == "C+"){
		result2= 2.3*no2;
	} else if (grade2 == "C"){
		result2= 2.0*no2;
	} else if (grade2 == "C-"){
		result2= 1.7*no2;
	} else if (grade2 == "D+"){
		result2= 1.3*no2;
	} else if (grade2 == "D"){
		result2= 1.0*no2;
	} else {
		result2=0;
	}
	double result3;
	if (grade3 == "A"){
		result3= 4*no3;
	} else if (grade3 == "A-"){
		result3= 3.7*no3;
	} else if (grade3 == "B+"){
		result3= 3.3*no3;
	} else if (grade3 == "B"){
		result3= 3.0*no3;
	} else if (grade3 == "B-"){
		result3= 2.7*no3;
	} else if (grade3 == "C+"){
		result3= 2.3*no3;
	} else if (grade3 == "C"){
		result3= 2.0*no3;
	} else if (grade3 == "C-"){
		result3= 1.7*no3;
	} else if (grade3 == "D+"){
		result3= 1.3*no3;
	} else if (grade3 == "D"){
		result3= 1.0*no3;
	} else {
		result3=0;
	}
	
	cout<< (maga+ result + result1 + result2 + result3)/(semcred + cred);
	return 0;
}
