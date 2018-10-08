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
	void normalize();
	T distance_to(Vector3 p);

	//operator override
	Vector3<T> operator+(Vector3<T> a);
	Vector3<T> operator=(Vector3<T> a);

	//variables
	T x;
	T y;
	T z;

};

