#include<string.h>
class Book
{
	int bId;
	char bName[20];
	char author[20];
	double price;
	double rating;
	char language[20];
	public:
	Book();
	// parameterized cinstructor
	Book(int,const char*,char*,double,double,const char*);
	void setid(int);
	int getid();
	void setname(const char*);
	char*getname();
	void setAuthor(char*);
	char*getAuthor();
	void setPrice(double);
	double getPrice();
	void setRating(double r);
	double getRating();
	void setLanguage(const char*);
	char* getlanguage();
	void display();	
};
