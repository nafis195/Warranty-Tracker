// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Warranty Tracker
// WarrantyTracker.h

#pragma once
#ifndef WARRANTYTRACKER_H
#define WARRANTYTRACKER_H

#include"Struct.h"

#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

class WarrantyTracker
{
private:
	Product* head;
	int userChoiceInput;
	int count = 0;
public:
	WarrantyTracker();  // default constructor
	~WarrantyTracker();  // destructor
	void addNewProductWarranty();  // this function will be used to add new product warranty
	void editProductWarranty();  // this function will allow users to edit or update an existing product warranty 
	void removeProductEntry();  // this function will remove product warranty
	void viewSpecificProductWarranty();  // this function will display only one specific product warranty based on user's choice
	void viewAllProductWarranty();  // this function call will display all products warranties that has been stored
	void welcomeMessage();  // this function will display welcome message to the user
	void exitMessage();  // this function will display a thank you message to the user before leaving the app
	void instructions();  // this function will show the user some instruction on how to use this app
	void userChoice();  // this function will input from the user about user's choice
};

#endif