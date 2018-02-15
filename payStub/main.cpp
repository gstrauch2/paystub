/* George Strauch
 * formatted paystub
 * formats a monthly paystub
 * feb-14-2018
 * */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string name = "George Strauch";
    double gross = 20000.00;
    double fedTax = 0.0;    // 15%
    double stateTax = 0.0;  // 0%
    double ssTax = 0.0;     // 5.75%
    double medTax = 0.0;    // 2.75%
    double pension = 0.0;   // 5%
    double health = 0.0;    // 5%
    double net = 0.0;

    fedTax = (gross/100)*15;
    stateTax = (gross/100)*0;
    ssTax = (gross/100)*5.75;
    medTax = (gross/100)*2.75;
    pension = (gross/100)*5;
    health = 75;

    net = gross - fedTax - stateTax - ssTax - medTax - pension - health;

    cout << fixed;
    cout << setprecision(2);

    cout << left << name << endl;
    cout << setw(30) << "gross pay" << setfill('.') << "$" << gross << endl;
    cout << setw(30) <<"Federal tax" << setfill('.') << "$" << fedTax << endl;
    cout << setw(30) << "State tax" << setfill('.') << "$" << stateTax << endl;
    cout << setw(30) << "Social security tax" << setfill('.') << "$" << ssTax << endl;
    cout << setw(30) << "Pension plan" << setfill('.') << "$" << pension << endl;
    cout << setw(30) << "Health insurance" << setfill('.') << "$" << health << endl;
    cout << setw(30) << "Net pay" << setfill('.') << "$" << net << endl;



    return 0;
}