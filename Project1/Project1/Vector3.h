template <class T>
class Vector3{
public:
	//functions
	Vector3();
	Vector3(const Vector3 &original);
	Vector3(T x, T y, T z);
	~Vector3();
	void normalize();
	T distance_to(Vector3 p);
	//operator override
	Vector3<T> operator+(Vector3<T> a);
	void operator=(Vector3<T> a);

	//variables
	T x;
	T y;
	T z;

};

