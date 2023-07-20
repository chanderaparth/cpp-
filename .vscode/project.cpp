#include <iostream>
#include <string>
using namespace std;

int main() {
    string menu[10] = {"chinese Roal", "Veggies", "Salt & pepper", "Manchuream", "dary manchurean", "sushi", "hakka nuddle", "pasta", "white sous pasta", "Magi"};
    float price[10] = {₹500, ₹300, ₹700, ₹600, ₹200, ₹200, ₹100, ₹800, ₹600, ₹900};

    int quantity[10] = {0, 0, 0, 0, 0};
    float gst = 0.06;
    float discount = 0.10;
    float total = 0.00;
    float sub_total = 0.00;
    float tax = 0.00;
    float discount_amount = 0.00;

    cout << "Welcome to chinese caska restaurant!" << endl;
    cout << "Here's our menu: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << i+1 << ". " << menu[i] << " - " << price[i] << endl;
    }
    cout << endl;

    int choice = 0;
    do {
        cout << "Enter the item number you want to order (1-5), or 0 to exit: ";
        cin >> choice;
        if (choice >= 1 && choice <= 10) {
            int qty = 0;
            cout << "Enter the quantity: ";
            cin >> qty;
            quantity[choice-1] += qty;
            sub_total += price[choice-1] * qty;
        }
    } while (choice != 0);

    tax = sub_total * gst;
    total = sub_total + tax;
    discount_amount = total * discount;
    total -= discount_amount;

    cout << endl << "Here's your bill: " << endl;
    for (int i = 0; i < 10; i++) {
        if (quantity[i] > 0) {
            cout << quantity[i] << " x " << menu[i] << " - " << price[i] * quantity[i] << endl;
        }
    }
    cout << "Subtotal: " << sub_total << endl;
    cout << "Tax: " << tax << endl;
    cout << "Discount: " << discount_amount <<endl;
    cout << "\nThank you! visite again"<<endl;
}