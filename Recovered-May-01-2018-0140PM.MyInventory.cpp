#include "stdafx.h"
#include "InventoryItem.h"
#include "InventoryList.h"
using namespace std;

int main()
{
	InventoryList myList;
	myList.addInventoryItem();
	myList.addInventoryItem();
	myList.displayList();


	return 0;
}