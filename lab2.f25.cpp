
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>

using namespace std;

int main() {

	// Read and store employee name from user input

	cout << "Enter the name of the employee: ";
	string employeename;
	getline(cin, employeename);
	transform(employeename.begin(), employeename.end(), employeename.begin(), ::toupper);

	cout << "Enter item #1: ";
	string item1;
	getline(cin, item1);
	transform(item1.begin(), item1.end(), item1.begin(), ::toupper);
	cout << "Enter price: ";
	double price1;
	cin >> price1;
	cin.ignore(1);

	cout << "Enter item #2: ";
	string item2;
	getline(cin, item2);
	transform(item2.begin(), item2.end(), item2.begin(), ::toupper);
	cout << "Enter price: ";
	double price2;
	cin >> price2;
	cin.ignore(1);

	cout << "Enter item #3: ";
	string item3;
	getline(cin, item3);
	transform(item3.begin(), item3.end(), item3.begin(), ::toupper);
	cout << "Enter price: ";
	double price3;
	cin >> price3;
	cin.ignore(1);

	cout << "Enter item #4: ";
	string item4;
	getline(cin, item4);
	transform(item4.begin(), item4.end(), item4.begin(), ::toupper);
	cout << "Enter price: ";
	double price4;
	cin >> price4;
	cin.ignore(1);

	cout << "Enter item #5: ";
	string item5;
	getline(cin, item5);
	transform(item5.begin(), item5.end(), item5.begin(), ::toupper);
	cout << "Enter price: ";
	double price5;
	cin >> price5;
	cin.ignore(1);

	// Calculate subtotal, tax, and total
	double subtotal = price1 + price2 + price3 + price4 + price5;
	double tax = subtotal * 0.015;
	double total = subtotal + tax;

	// Write the receipt to a file

	ofstream receipt("receipt.txt");
	receipt << "THANKS FOR SHOPPING AT MY STORE" << endl << endl << "ASSOCIATE: " << employeename << endl << "STORE# 5" << endl << "EDINBURG, TX 78359" << endl << endl;
	receipt << left << setw(20) << item1 << right << setw(3) << "$" << setw(5) << fixed << setprecision(2) << price1 << endl;
	receipt << left << setw(20) << item2 << right << setw(3) << "$" << setw(5) << fixed << setprecision(2) << price2 << endl;
	receipt << left << setw(20) << item3 << right << setw(3) << "$" << setw(5) << fixed << setprecision(2) << price3 << endl;
	receipt << left << setw(20) << item4 << right << setw(3) << "$" << setw(5) << fixed << setprecision(2) << price4 << endl;
	receipt << left << setw(20) << item5 << right << setw(3) << "$" << setw(5) << fixed << setprecision(2) << price5 << endl << endl;
	receipt << left << setw(15) << right << "SUBTOTAL" << setw(1) << "$" << setw(5) << fixed << setprecision(2) << subtotal << endl;
	receipt << left << setw(15) << right << "TAX" << setw(1) << "$" << setw(5) << fixed << setprecision(2) << tax << endl;
	receipt << left << setw(15) << right << "TOTAL" << setw(1) << "$" << setw(5) << fixed << setprecision(2) << total << endl << endl << endl;
	receipt << "*** CUSTOMER COPY ***";

	return 0;
}