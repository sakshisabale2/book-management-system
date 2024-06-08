#include"bookArray.h"
#include <iostream>
using namespace std;
bookArray::bookArray()
{
	size=0;
	index=-1;
	p=NULL;
	
}
bookArray::bookArray(int s)
{
	size=s;
	index=-1;
	p=new Book[size];
	
}
bookArray::bookArray(bookArray &t)
{
	cout<< "\n copy constructor";
	size=t.size;
	index= t.index;
	p=new Book[size];
	for(int i=0;i<=index;i++)
	{
		p[i]=t.p[i];
	}
	
}
bool bookArray::isEmpty()
{
	if(index==-1)
	{
	 return true;	
	}
	else
	{
	 return false;	
	}
	
}
bool bookArray::isFull()
{
	if(index==size-1)
	{
	     return true;	
	}
	else
	{
		return false;
	}
}
bool bookArray::storeData(Book& e1)
{
	if(isFull())
	{
		cout<<"\nArray is full!!";
		return false;
	}
	
	p[++index]=e1;
	return true;	
}

void bookArray::display()
{
      if(isEmpty())
      {
      	cout<<"No element to display!!";
      	return;
	 }
	 else
	 {
		for(int i=0;i<=index;i++)
		   {
		     p[i].display();
		   }	
	 }
}
int bookArray::searchEle(int id)
{
	if(isEmpty())
	{
		cout<<"\nArray is empty";
		return -1;
	}
	
	for(int i=0;i<=index;i++)
	{
		if(id==p[i].getid())
		{
			return i;
		}
	}
	return -1;
}

int bookArray::searchByName(char* name)
{
	if(isEmpty())
	{
		cout<<"\nArray is empty";
		return -1;
	}
	
	for(int i=0;i<=index;i++)
	{
		if(strcmp(name,p[i].getname())==0)
		{
			return i;
		}
	}
	return -1;
}

void bookArray::searchByAuthor(char* a)
{
	if(isEmpty())
	{
		cout<<"\nArray is empty";
		return;
	}
	int flag=0;
	for(int i=0;i<=index;i++)
	{
		if(strcmp(a,p[i].getAuthor()) == 0)
		{
//		  cout<<"Books found for author: "<<a;
            p[i].display();
			flag=1;
		}
	}
	if(flag==0) 
	{
        cout<<"No books found for author: "<<a;
     }
}

bool bookArray::deleteArray(int id)
{
	int pos=this->searchEle(id);
	if(pos==-1)
	{
		return false;
	}
	while(pos<=index)
	{
		p[pos]=p[pos+1];
		pos++;
	}
	index--;
	return true;
}
void bookArray::topThreeByRating() 
{
    int i,j;
    Book temp;
    for(i=0;i<index-1;i++) 
    {
     for(j=0;j<index-i-1;j++) 
	{
       if (p[j].getRating() < p[j+1].getRating()) 
	  {
	      temp=p[j];
	      p[j]=p[j+1];
	      p[j+1]=temp;
       }
     }
    }
    cout<<"\nTop 3 Books by Rating:\n";
    for(i=0;i<index && i<3;i++) 
    {
      p[i].display;
    }
}


bookArray::~bookArray()
{
	if(p!=NULL)
	{
		delete []p;
	}
}
