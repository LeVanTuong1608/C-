#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product {
private:
    string code;
    string name;
    double price;

public:
    Product(string code, string name, double price) {
        this->code = code;
        this->name = name;
        this->price = price;
    }

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }
};

class PriceTable {
private:
    vector<Product> products;

public:
    void addProduct(Product product) {
        products.insert(products.begin(), product);
    }

    Product* findProductByName(string name) {
        for (auto& product : products) {
            if (product.getName() == name) {
                return &product;
            }
        }
        return nullptr;
    }

    void removeFirstProduct() {
        if (!products.empty()) {
            products.erase(products.begin());
        }
    }

    void displayPriceTable() {
        for (const auto& product : products) {
            cout << "Product: " << product.getName() << ", Price: " << product.getPrice() << endl;
        }
    }
};

int main() {
    int choice;
    cin >> choice;

    PriceTable priceTable;

    if (choice == 1) {
        int numProducts;
        cin >> numProducts;

        for (int i = 0; i < numProducts; i++) {
            string code, name;
            double price;
            cin >> code >> name >> price;

            Product product(code, name, price);
            priceTable.addProduct(product);
        }

        cout << numProducts << " product(s) added." << endl;
    } else if (choice == 2) {
        string searchName;
        cin >> searchName;

        Product* foundProduct = priceTable.findProductByName(searchName);

        if (foundProduct != nullptr) {
            cout << "Product: " << foundProduct->getName() << ", Price: " << foundProduct->getPrice() << endl;
        } else {
            cout << -1 << endl;
        }
    } else if (choice == 3) {
        priceTable.removeFirstProduct();
        cout << "Price table after removing the first product:" << endl;
        priceTable.displayPriceTable();
    }

    return 0;
}