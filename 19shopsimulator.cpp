#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name[5];
    float prices[5], sum;
    int quantity[5], n;

public:
    Product() {
        sum = 0;
        cout << "Enter number of products: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "Enter name of product " << i + 1 << ": ";
            cin.ignore();
            getline(cin, name[i]);
            cout << "Enter cost: ";
            cin >> prices[i];
            cout << "Enter quantity: ";
            cin >> quantity[i];
            sum += (prices[i] * quantity[i]);
        }
    }

    void cart() {
        cout << "Cart: " << endl
             << "Product Name\tPrice\tQuantity" << endl;
        for (int i = 0; i < n; i++) {
            cout << name[i] << "\t\t" << prices[i] << "\t" << quantity[i] << endl;
        }
        cout << "Total cost: " << sum << endl;
    }
};

int main() {
    Product p1;
    p1.cart();
    return 0;
}
