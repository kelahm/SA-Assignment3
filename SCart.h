#include "Item.h"
#include <iostream>
using namespace std;
//This class is responsible for adding items to the cart and providing the total for the purchase.
class Cart
{
private:
	Item itemArray[100];
	double total;
	int index;
public:
	void addItem(Item currentItem);
	double getTotal();

	Cart();

};

Cart::Cart()
{
	total = 0.0;
	//Set the items to empty to indicate that the cart is empty. 
	for (int i = 0; i<100; i++)
	{
		itemArray[i].name = "";
		itemArray[i].price = 0.0;
		itemArray[i].quantityAvailable = 0;
	}
	index = 0;
}
void Cart :: addItem(Item currentItem)
{
	//Add Item to the cart.
	itemArray[index].name = currentItem.name;
	itemArray[index].price = currentItem.price;
	itemArray[index].quantityAvailable = currentItem.quantityAvailable;
	index++;
}
double Cart ::  getTotal()
{
	//Get the total of the products in the cart. 
	for (int i = 0; i<100; i++)
	{
		total += (itemArray[i].price * itemArray[i].quantityAvailable);
	}

	return total;
}