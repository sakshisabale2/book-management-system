#include"book.h"
#include <iostream>
using namespace std;
Book::Book()          // constructores does not have return type
{
	bId=0;
	strcpy(bName,"Not given");
	strcpy(author,"Not given");
	price=1000;
	rating=0.0;
	strcpy(language,"Not given");	
}
// parameterized cinstructor
Book::Book(int v1,const char*v2, char*v3,double v4,double v5,const char* v6)
{
     bId=v1;
	strcpy(bName,v2);
	strcpy(author,v3);
	price=v4;
	rating=v5;
	strcpy(language,v6);

}
void Book::setid(int n)
{
    bId=n;
}
int Book::getid()
{
	return bId;
}
void Book::setname(const char*ch)
{
    strcpy(bName,ch);
}
char*Book::getname()
{
	return bName;
}
void Book::setAuthor(char* a)
{
  strcpy(author,a);	
}
char*Book::getAuthor()
{
	return author;
}
void Book::setPrice(double d)
{
	price=d;
}
double Book::getPrice()
{
	return price;
}
void Book::setRating(double r)
{
	rating=r;
}
double Book::getRating()
{
	return rating;
}
void Book::setLanguage( const char*l)
{
	strcpy(language,l);
}
char*Book::getlanguage()
{
	return language;
}
void Book::display()
{
  cout<<"\nBook id: "<<bId;
  cout<<"\nBook name: "<<bName;
  cout<<"\nBook Author name: "<<author;
  cout<<"\nBook price: "<<price;
  cout<<"\nBook rating: "<<rating;
  cout<<"\nBook language: "<<language;
 

}
