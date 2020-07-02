#include <iostream>
#include <string>
#include <vector>


int main() {
	std::vector<std::string> groceryList = {"Eggs", "Cocoa Powder", "Bananas", "Milk", "Chicken"};

	std::cout << "This is a grocery list:\n";
	for(unsigned int itemNo = 0; itemNo != groceryList.size(); ++itemNo) {
		std::cout << itemNo << ". " << groceryList[itemNo] << "\n";
	}
}
