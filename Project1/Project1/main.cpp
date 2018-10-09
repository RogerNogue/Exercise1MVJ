#include <iostream>
#include "Vector3.h"
#include "String.h"

using namespace std;

int main() {
	//<>
	//vector3 operations
	/*
	Vector3<float> vec(2., 2., 3.);
	Vector3<float> vec2(3., 2., 1.);
	Vector3<float> vec3;
	vec3 = vec + vec2;
	//vec3.normalize();
	cout << "distance to 5, 5, 5 = " << vec3.distance_to(Vector3<float>(5, 5, 5)) << endl;
	vec3.printVector();
	*/

	//string operations
	
	String s("hola");
	s.printString();
	String a("hola");
	String b = s + a;
	s.printString();
	a.printString();
	b.printString();
	/*
	s.~String();
	a.~String();
	b.~String();
	*/

	

	while(1){}
}