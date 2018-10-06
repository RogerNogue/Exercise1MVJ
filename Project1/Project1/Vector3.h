template <class T>
class Vector3
{
public:
	//functions
	Vector3();
	Vector3(Vector3 original);
	Vector3(T x, T y, T z);
	~Vector3();
	void normalize();
	float distance_to(Vector3 p);
	//operator override
	Vector3 operator+(Vector3 a);

	//variables
	T x;
	T y;
	T z;

};

