class String
{
public:
	String(const char *str);
	String(const String *s);
	~String();

	//functions
	void printString();
	int length();
	void clear();

	
	//operator override
	String operator=(String a);
	String operator+(String a);
	bool operator==(String a);
	bool operator==(const char* a);
	
	

	//variables
	char *start;
	int size;
private:
	void copy(const char* str, int siz);

};

