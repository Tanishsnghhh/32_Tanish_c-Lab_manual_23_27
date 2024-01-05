/* TITLE:
Write a program to creating an inventory management system for a small store. The system should use object-oriented principles in C++. Your program should have the following features:
	Create a Product class that represents a product in the inventory. Each Product object should have the following attributes:
Product ID (an integer)
Product Name (a string)
Price (a floating-point number)
Quantity in stock (an integer)
	Implement a parameterized constructor for the Product class to initialize the attributes when a new product is added to the inventory.*/

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;
    int quantity;

public:
    Product() {}
    Product(int id, string name, float p, int q) {
        productId = id;
        productName = name;
        price = p;
        quantity = q;
    }
};

int main() {
    int numOfProducts, prodId, quantity;
    string prodName;
    float price;

    cout << "Enter number of products: ";
    cin >> numOfProducts;

    Product products[numOfProducts];

    for (int i = 0; i < numOfProducts; i++) {
        cout << "Enter Product ID: ";
        cin >> prodId;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, prodName);
        cout << "Enter Price of Product: ";
        cin >> price;
        cout << "Enter Quantity of Product: ";
        cin >> quantity;
        products[i] = Product(prodId, prodName, price, quantity);
    }

    return 0;
}
