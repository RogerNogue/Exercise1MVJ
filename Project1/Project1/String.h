class String
{
public:
	String(const char *str);
	String(const String *s);
	~String();

	//operator override
	/*
	String operator=(String a);
	String operator+(String a);
	String operator==(String a);
	*/
	//variables
	char *start;
	int size;
private:
	void copy(const char* str);

};

