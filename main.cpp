/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT # : 3
 * CLASS        : CS1C
 * SECTION      : MW 5:00pm
 * DUE DATE     : 2/12/19
 ******************************************************************************/

#include "header.h"

/******************************************************************************
 * Pointer
 * ----------------------------------------------------------------------------
 * This program will show the user the amount of items in stock and their cost
 * and subtract from the inventory then add up the cost before and after tax.
 *****************************************************************************/
struct Inventory
{
	std::string equipmentName;  // The name of the equipment
	double cost;                // The cost of the equipment
	int    quantity;            // The quantity in the inventory

};

namespace variable
{
	const int PROMPT_COL  = 50; // Column size for the cout
	const int RECEIPT_COL = 22; // Column size for the receipt
	const int INV_COL     = 32; // Column size for the inventory
	const int PRICE_COL   = 7;  // Column size for the price
	int basketShoesAmount; // The # of Nike shoes being bought
	int tShirtAmount;      // The # of T-shirt being bought
	int brooksAmount;      // The # of Brooks shoes being bought
	int asicsAmount;       // The # of Asics shoes being bought
	int shortAmount;       // The # of shorts being bought
	int basketInv;         // Holds the amount of Nike shoes in the inventory
	int tShirtInv;         // Holds the amount of T-shirts in the inventory
	int brooksInv;         // Holds the amount of Brooks shoes in the inventory
	int asicsInv;          // Holds the amount of Asics shoes in the inventory
	int shortInv;          // Holds the amount of shorts in the inventory
	double basketCost;     // Holds the price of Nike shoes
	double tShirtCost;     // Holds the price of
	double brooksCost;     // Holds the price of Brooks shoes
	double asicsCost;      // Holds the price of Asics shoes
	double shortCost;      // Holds the price of shorts
	double amtBeforeTax;   // Holds the amount of the sale before tax
	double tax;            // Tax % being charged; 7.75.
	double taxAmount;      // Stores the amount that was taxed
	double amtAfterTax;    // The total value after tax
}

int main()
{

	Inventory inventory[5]; // Creates an array that holds 5 elements
	variable::tax = 7.75;   // initializing the tax amount

	//Calls the function to print out the author box
	PrintHeader("Pointer", 3, 'A');

	std::cout << "This program will show the items available for purchase\n"
			  << "and how many are in stock. Then after the user has\n"
			  << "selected how many they want the program will add up\n"
			  << "their total before and after tax\n\n";

	inventory[0].equipmentName = "Nike basketball shoes";
	inventory[0].cost = 179.99;
	inventory[0].quantity = 25;
	inventory[1].equipmentName = "Under Armour T-shirt";
	inventory[1].cost = 29.99;
	inventory[1].quantity = 88;
	inventory[2].equipmentName = "Brooks running shoes";
	inventory[2].cost = 121.44;
	inventory[2].quantity = 13;
	inventory[3].equipmentName = "Asics running shoes";
	inventory[3].cost = 165.88;
	inventory[3].quantity = 12;
	inventory[4].equipmentName = "Under Armour shorts";
	inventory[4].cost = 45.77;
	inventory[4].quantity = 35;

	std::cout << std::left;
	std::cout << std::setw(variable::RECEIPT_COL) << "Name of Equipment"
			  << std::setw(variable::PRICE_COL) << "Cost" << "Quantity\n";
	for(int count = 0; count < 5; count++)
	{
		std::cout << std::setw(variable::RECEIPT_COL)
		          << inventory[count].equipmentName
				  << std::setw(variable::PRICE_COL)
		     	  << inventory[count].cost << " "
			      << inventory[count].quantity << std::endl;
	}// end for(int count = 0; count < 5; count++)

	std::cout << std::endl;
	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Nike basketball shoes do you want? ";
	std::cin  >> variable::basketShoesAmount;

	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Under Armour T-shirts do you want? ";
	std::cin  >> variable::tShirtAmount;

	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Brooks shoes do you want? ";
	std::cin  >> variable::brooksAmount;

	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Asics running shoes do you want? ";
	std::cin  >> variable::asicsAmount;

	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Under Armour shorts do you want? ";
	std::cin  >> variable::shortAmount;
	std::cin.ignore(1000, '\n');

	std::cout << std::endl;
	variable::basketInv = inventory[0].quantity - variable::basketShoesAmount;
	variable::basketCost = inventory[0].cost * variable::basketShoesAmount;
	inventory[0].quantity = variable::basketInv;
	std::cout << std::setw(variable::INV_COL)<< "Nike shoes left in inventory:"
			  << inventory[0].quantity << std::endl;

	variable::tShirtInv = inventory[1].quantity - variable::tShirtAmount;
	variable::tShirtCost = inventory[1].cost * variable::tShirtAmount;
	inventory[1].quantity = variable::tShirtInv;
	std::cout << std::setw(variable::INV_COL) << "T-Shirts left in inventory:"
			  << inventory[1].quantity << std::endl;

	variable::brooksInv = inventory[2].quantity - variable::brooksAmount;
	variable::brooksCost = inventory[2].cost * variable::brooksAmount;
	inventory[2].quantity = variable::brooksInv;
	std::cout << std::setw(variable::INV_COL)
	          << "Brooks shoes left in inventory:" << inventory[2].quantity
			  << std::endl;

	variable::asicsInv = inventory[3].quantity - variable::asicsAmount;
	variable::asicsCost = inventory[3].cost * variable::asicsAmount;
	inventory[3].quantity = variable::asicsInv;
	std::cout << std::setw(variable::INV_COL)
	          << "Asics shoes left in inventory:" << inventory[3].quantity
			  << std::endl;

	variable::shortInv = inventory[4].quantity - variable::shortAmount;
	variable::shortCost = inventory[4].cost * variable::shortAmount;
	inventory[4].quantity = variable::shortInv;
	std::cout << std::setw(variable::INV_COL) << "Shorts left in inventory:"
			  << inventory[4].quantity << std::endl;

	std::cout << std::endl;
	std::cout << "Receipt\n";
	std::cout << std::setw(variable::RECEIPT_COL) << "Nike Shoes"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::basketShoesAmount
			  << " = " << variable::basketCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Under Armour T-shirts"
			  << "x" << std::fixed << std::setprecision(2)
	          << variable::tShirtAmount
			  << " = " << variable::tShirtCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Brooks shoes"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::brooksAmount
			  << " = " << variable::brooksCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL)<< "Asics shoes"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::asicsAmount
			  << " = " << variable::asicsCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Under Armour shorts"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::shortAmount
			  << " = " << variable::shortCost << std::endl;

	variable::amtBeforeTax = variable::basketCost + variable::tShirtCost
				               + variable::brooksCost + variable::asicsCost
							   + variable::shortCost;


	std::cout << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Amount before tax: "
			 << std::fixed << std::setprecision(2) << variable::amtBeforeTax
			 << std::endl;
	variable::taxAmount = (variable::amtBeforeTax * variable::tax) / 100;
	std::cout << std::setw(variable::RECEIPT_COL) << "Tax: "
			  << std::fixed << std::setprecision(2) << variable::taxAmount
			  << std::endl;
	variable::amtAfterTax = variable::amtBeforeTax + variable::taxAmount;
	std::cout << std::setw(variable::RECEIPT_COL) << "Amount after tax: "
			  << std::fixed << std::setprecision(2) << variable::amtAfterTax
			  << std::endl;
	std::cout << std::right;

	return 0;
}
