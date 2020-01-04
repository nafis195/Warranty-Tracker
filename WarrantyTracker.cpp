// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Warranty Tracker 
// WarrantyTracker.cpp

#include"Struct.h"
#include"WarrantyTracker.h"



//========== default constructor==========
WarrantyTracker::WarrantyTracker()
{
	head = NULL;
}
//==========end of default constructor==========



//==========destructor==========
WarrantyTracker::~WarrantyTracker()
{
	cin.clear();
}
//==========end of destructor==========



//==========add new product warranty function==========
void WarrantyTracker::addNewProductWarranty()
{
	if (head == NULL)
	{
		count++;
		head->serial = count;

		cout << "Please enter the product model/parts/item number:- ";
		getline(cin, head->partsNumber);
		cout << endl;
		
		cout << "Please enter the product name:- ";
		getline(cin, head->itemName);
		cout << endl;

		cout << "Please enter the vendor name:- ";
		getline(cin, head->vendorName);
		cout << endl;

		cout << "Please enter the place where you can buy:- ";
		getline(cin, head->placeToBuy);
		cout << endl;

		cout << "Please enter the purchase date:- ";
		getline(cin, head->purchaseDate);
		cout << endl;

		cout << "Please add any optional notes if you want, otherwise please enter \"NONE\":- ";
		getline(cin, head->notes);
		cout << endl;
	}
	else
	{
		Product* newProduct = head;

		while (newProduct->next != NULL)
			newProduct = newProduct->next;

		count++;
		head->serial = count;

		cout << "Please enter the product model/parts/item number:- ";
		getline(cin, head->partsNumber);
		cout << endl;

		cout << "Please enter the product name:- ";
		getline(cin, head->itemName);
		cout << endl;

		cout << "Please enter the vendor name:- ";
		getline(cin, head->vendorName);
		cout << endl;

		cout << "Please enter the place where you can buy:- ";
		getline(cin, head->placeToBuy);
		cout << endl;

		cout << "Please enter the purchase date:- ";
		getline(cin, head->purchaseDate);
		cout << endl;

		cout << "Please add any optional notes if you want, otherwise please enter \"NONE\":- ";
		getline(cin, head->notes);
		cout << endl;
	}
}
//==========end of add new product warranty function==========



//==========edit product warranty function==========
void WarrantyTracker::editProductWarranty()
{

}
//==========end of edit product warranty function==========



//==========remove product warranty function==========
void WarrantyTracker::removeProductEntry()
{

}
//==========end of remove product warranty function==========



//==========view specific product warranty function==========
void WarrantyTracker::viewSpecificProductWarranty()
{

}
//==========end of view specific product warranty function==========



//===========view all product warranty function==========
void WarrantyTracker::viewAllProductWarranty()
{

}
//==========end of view all product warranty function==========



//==========welcome message function==========
void WarrantyTracker::welcomeMessage()
{
	cout << "          " << "*******WARRANTY TRACKER*******" << endl;
	cout << endl;
	cout << endl;
	cout << "     " << "Welcome to Warranty Tracker App" << endl;
	cout << "     " << "===============================" << endl;
	cout << endl;
}
//==========end of welcome message function==========



//==========exit message function==========
void WarrantyTracker::exitMessage()
{
	cout << "Thank you for using Warranty Tracker!!!" << endl;
	cout << endl;
}
//==========end of exit message function==========



//==========instructions function==========
void WarrantyTracker::instructions()
{
	cout << "Here are some useful instructions on how to use this app:-" << endl;
	cout << "1. To add a product warranty, please have the item name, parts number, vendor name, where to buy the product, purchase date ready. These are the required field." << endl;
	cout << "2. To add a purchase date for a product please follow this format --> Jan 08 2005 means January 8, 2005." << endl;
	cout << "3. You may add an optional notes for each product. If you do not want to add any notes, please type \"None\"." << endl;
	cout << "4. To remove a product warranty, please enter the item or parts number of that product. You may also enter the product listing serial number." << endl;
	cout << "5. To view a specific product warranty, please enter the item or parts number of that product. You may also enter the product listing serial number." << endl;
	cout << "6. To edit or update a specific product warranty, please enter the item or parts number of that product. Please make sure the item number is correct." << endl;
	cout << endl;
}
//==========end of instructions function==========



//==========user choice function==========
void WarrantyTracker::userChoice()
{
	cout << "Please selct from the following option:-" << endl;
	cout << "1. Add a new product warranty" << endl;
	cout << "2. Edit or update a product warranty" << endl;
	cout << "3. Remove a product warranty" << endl;
	cout << "4. View a specific product warranty" << endl;
	cout << "5. View all products warranty" << endl;
	cout << "6. View instructions" << endl;
	cout << "7. Exit" << endl;

	cin >> userChoiceInput;  // taking input from user. it will be an integer number which matches with the option numbers above.

	switch (userChoiceInput)
	{
	case 1:
		addNewProductWarranty();
	case 2:
		editProductWarranty();
	case 3:
		removeProductEntry();
	case 4:
		viewSpecificProductWarranty();
	case 5:
		viewAllProductWarranty();
	case 6:
		instructions();
	case 7:
		exitMessage();
	}
}
//==========end of user choice function==========