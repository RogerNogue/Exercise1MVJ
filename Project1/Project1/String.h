class String
{
public:
	String();
	String(String original);
	String();
	~String();

	//operator override
	String operator=(String a);
	String operator+(String a);
};

