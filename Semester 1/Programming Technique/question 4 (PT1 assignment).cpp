#include <iostream>
#include<string>
using namespace std ;
int main() 
{
	double price = 0;
	int quantity ;
	string level;
	
	cout << "Enter the quantity and level:  " ;
	cin >> quantity >> level; 
	
	if (level == "low") 
	{
		if ( quantity >=0 &&  quantity <15 )
	      price = quantity * 0.3 ;
	    else if (( quantity >= 15) && (quantity < 50))
	      price = quantity * 0.5 ;
	    else if(quantity >= 51 )
	      price = quantity * 0.7;
	}
	else if  (level == "high")
	{
		if ( quantity > 0 &&  quantity <=10 )
	      price = quantity * 0.2 ;
	    else if (( quantity > 10 ) && (quantity <= 20))
	      price = quantity * 0.3 ;
	    else if(quantity > 20 )
	      price = quantity * 0.6;
	}
	cout << "price: RM " << price ;
	
	return 0;
}
