#include"book.h"
class bookArray
{
	Book*p;
	int index;
	int size;
	public:
	bookArray();
	bookArray(int);
	bookArray(bookArray &);//copy constructor
	bool isEmpty();
	bool isFull();
     bool storeData(Book&);
     void display();
	int searchEle(int);
	bool deleteArray(int);
	int searchByName(char*);
	void searchByAuthor(char*);
	void topThreeByRating();
	~bookArray();
};
