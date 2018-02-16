/* George Strauch
 * formatted paystub
 * formats a monthly paystub
 * feb-14-2018
 * */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string strName = "George Strauch";
    double dblGross = 20000.00;
    double dblFedTax = 0.0;    // 15%
    double dblStateTax = 0.0;  // 0%
    double dblssTax = 0.0;     // 5.75%
    double dblMedTax = 0.0;    // 2.75%
    double dblPension = 0.0;   // 5%
    double dblHealth = 0.0;    // 5%
    double dblNet = 0.0;

    dblFedTax = (dblGross/100)*15;
    dblStateTax = (dblGross/100)*0;
    dblssTax = (dblGross/100)*5.75;
    dblMedTax = (dblGross/100)*2.75;
    dblPension = (dblGross/100)*5;
    dblHealth = 75;

    dblNet = dblGross - dblFedTax - dblStateTax - dblssTax - dblMedTax - dblPension - dblHealth;

    cout << fixed;
    cout << setprecision(2);

    cout << left << strName << endl;
    cout << setw(30) << "dblGross pay" << setfill('.') << "$" << dblGross << endl;
    cout << setw(30) <<"Federal tax" << setfill('.') << "$" << dblFedTax << endl;
    cout << setw(30) << "State tax" << setfill('.') << "$" << dblStateTax << endl;
    cout << setw(30) << "Social security tax" << setfill('.') << "$" << dblssTax << endl;
    cout << setw(30) << "Pension plan" << setfill('.') << "$" << dblPension << endl;
    cout << setw(30) << "Health insurance" << setfill('.') << "$" << dblHealth << endl;
    cout << setw(30) << "Net pay" << setfill('.') << "$" << dblNet << endl;



    return 0;
}
