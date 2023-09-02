#include <iostream>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    int pricePerItem;

public:
    Invoice(string partNum, string partDesc, int qty, int price) {
        partNumber = partNum;
        partDescription = partDesc;
        quantity = max(qty, 0);
        pricePerItem = max(price, 0);
    }

    double getInvoiceAmount() {
        return quantity * pricePerItem;
    }

    string getPartNumber() {
        return partNumber;
    }

    string getPartDescription() {
        return partDescription;
    }

    int getQuantity() {
        return quantity;
    }

    int getPricePerItem() {
        return pricePerItem;
    }
};

int main() {
    Invoice invoice("123456", "Hammer", 5, 10);

    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price Per Item: $" << invoice.getPricePerItem() << endl;

    double invoiceAmount = invoice.getInvoiceAmount();
    cout << "Invoice Amount: $" << invoiceAmount << endl;

    return 0;
}
