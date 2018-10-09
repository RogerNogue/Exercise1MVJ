#include <iostream>
template <class T>
class Vector3{
public:
	//functions
	Vector3() {
		x = 0;
		y = 0;
		z = 0;
	}
	Vector3(const Vector3 &original) :
		x(original.x),
		y(original.y),
		z(original.z)
	{
	}
	Vector3(T x, T y, T z) :
		x(x),
		y(y),
		z(z)
	{
	}
	//~Vector3();

	void printVector(Vector3 v) {
		cout << "x = " << v.x << ", y = " << v.y << ", z = " << v.z << endl;
	}

	void printVector() {
		cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	}

	void normalize() {
		float length = sqrt((x*x) + (y*y) + (z*z));
		x = x / length;
		y = y / length;
		z = z / length;
	}
	T distance_to(Vector3 p) {
		//returns the distance to p
		T diffX, diffY, diffZ;
		diffX = x - p.x;
		diffY = y - p.y;
		diffZ = z - p.z;
		return sqrt(pow(diffX, 2) + pow(diffY, 2) + pow(diffZ, 2));
	}

	//operator override
	Vector3<T> operator+(Vector3<T> a) {
		//https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
		
		 Vector3<T> Result(x + a.x, y + a.y, z + a.z);
		 //std::cout << "sum, result = " << Result.x << ", " << Result, y << ", " << Result.z << std::endl;
		 return Result;
		
		/*
		Result.x = this.x + a.x;
		Result.y = this.y + a.y;
		Result.z = this.z + a.z;
		return Result;
		*/
	}
	Vector3<T> operator=(Vector3<T> a) {
		x = a.x; y = a.y; z = a.z;
		return Vector3<T>(a.x, a.y, a.z);
	}

	//variables
	T x;
	T y;
	T z;

};

