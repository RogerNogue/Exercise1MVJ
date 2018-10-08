#include "Vector3.h"
#include <math.h>

/*
template <class T>
Vector3<T>::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

template <class T>
Vector3<T>::Vector3(const Vector3 &original):
	x(original.x),
	y(original.y),
	z(original.z)
{
}

template <class T>
Vector3<T>::Vector3(T x, T y, T z):
	x(x),
	y(y),
	z(z)
{
}

template <class T>
Vector3<T>::~Vector3()
{
}
*/
template<class T>
void Vector3<T>::normalize()
{
	float length = sqrt((x*x)+(y*y)+(z*z));
	x = x / length;
	y = y / length;
	z = z / length;
}

template<class T>
T Vector3<T>::distance_to(Vector3 p)
{
	//returns the distance to p
	T diffX, diffY, diffZ;
	diffX = x - p.x;
	diffY = y - p.y;
	diffZ = z - p.z;
	return sqrt(pow(diffX, 2) + pow(diffY, 2) + pow(diffZ, 2));
}

template<class T>
Vector3<T> Vector3<T>::operator+(Vector3<T> a)
{
	//https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
	Vector3<T> Result;
	Result.x = this.x + a.x;
	Result.y = this.y + a.y;
	Result.z = this.z + a.z;
	return Result;
}

template<class T>
Vector3<T> Vector3<T>::operator=(Vector3<T> a)
{
	return Vector3<T> (a.x, a.y, a.z);
}