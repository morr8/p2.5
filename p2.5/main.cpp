/*
 •• Business P2.5The following pseudocode describes how a bookstore computes the price of an order from the total price and the number of the books that were ordered.
 
 Read the total book price and the number of books.
 Compute the tax (7.5% of the total book price).
 Compute the shipping charge ($2 per book).
 The price of the order is the sum of the total book price, the tax, and the shipping charge.
 Print the price of the order.
 Translate this pseudocode into a C++ program.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter total books price: ";
    float book_price;
    cin >> book_price;
    
    cout << "Enter number of books: ";
    float books;
    cin >> books;
    cout << endl;
    
    float after_tax = (book_price * 0.075) + book_price;
    
    
    float shipping_charge = 2;
    
    
    cout << "The price of this order is: " << fixed << setprecision(2) << (after_tax + shipping_charge * books) << endl;
}
