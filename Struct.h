// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Warranty Tracker
// Struct.h

#pragma once
#ifndef STRUCT_H
#define STRUCT_H

#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

struct Product
{
	string itemName;
	string partsNumber;
	string vendorName;
	string placeToBuy;
	string purchaseDate;
	string lastDayOfWarranty;
	string notes;
	int serial;
	Product* next;
};

#endif