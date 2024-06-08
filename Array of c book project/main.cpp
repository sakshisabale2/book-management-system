#include"bookarray.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iostream>
using namespace std;
int main(int argc, char** argv) 
{
	int choice;
 	bookArray a1(5);
 	while(choice!=8)      
	 {
	 
 	 cout<<"\n\t1.add book";
 	 cout<<"\n\t2.display all books";
 	 cout<<"\n\t3. search book by id";
 	 cout<<"\n\t4. Delete book";
 	 cout<<"\n\t5. search book by name";
 	 cout<<"\n\t6. search book by Author";
 	 cout<<"\n\t7. to three books by rating";
      cout<<"\n\t10.exit";
      cout<<"\nEnter choice";
      cin>>choice;
      switch(choice)
      {
      	case 1:
      		{
      			int bId;
      			char bName[50];
      			char author[50];
      			double price;
      			double rating;
      			char language[50];
      		cout<<"\nEnter id: ";
      		cin>>bId;
      		cout<<"\nEnter Name: ";
      		cin>>bName;
      		cout<<"\nEnter Author Name: ";
      		cin>>author;
      		cout<<"\nEnter language: ";
      		cin>>language;
      		cout<<"\nEnter price: ";
      		cin>>price;
      		cout<<"\nEnter rating: ";
      		cin>>rating;
      		Book b1(bId,bName,author,price,rating,language);
      		a1.storeData(b1);
			 }
			 break;
		case 2:
		 a1.display();
		 break;
		case 3:
		 	{
			
		 	int id;
		 	cout<<"\nEnter id which want to search: ";
      		cin>>id;
      		int index= a1.searchEle(id);
      		if(index==-1)
      		{
      			cout<<"\nbook not found";
			 }
			 else
			 {
			 	cout<<"\nbook found at index "<<index;
			 }
		}
		break;
		case 4:
			{
				int id;
			 	cout<<"\nEnter id which want to delete: ";
	      		cin>>id;
				if(a1.deleteArray(id))
				{
					cout<<"\n book deleted successfully";
				}
			    else
	      		{
	      			cout<<"\n book not found";
				}  	
			}
		break;
		case 5:
		      {
		          char name[50];
			 	cout<<"\nEnter name which want to search: ";
	      		cin>>name;
	      		int index= a1.searchByName(name);
	      		if(index==-1)
	      		{
	      			cout<<"\n book not found";
				 }
				 else
				 {
				 	cout<<"\n book found at index "<<index;
				 }
			  }
		break;
		case 6:
	         	{
			    char authorName[50];
			 	cout<<"\nEnter author name which want to delete: ";
	      		cin>>authorName;
	      		a1.searchByAuthor(authorName);
//				if(a1.searchByAuthor(authorName))
//				{
//					cout<<"\n book deleted successfully";
//				}
//			    else
//	      		{
//	      			cout<<"\n book not found";
//				}  
			 }
			 break;
		case 7:
			 {
			 	a1.topThreeByRating();
			}
		      break;	 
		 case 8:
			cout<<"End of program";
			break;
		default:
		   cout<<"Invalid choice";	
	      
	 }	
   }
	return 0;
}
