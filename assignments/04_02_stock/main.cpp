/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/stock/stock.h"



//------------------------------------------------------------------------------

using namespace std;

void basic_test(bool debug=false);
void testB(bool debug=false);

int main()
{
    // BASIC TEST
    cout << "\n\n---------running basic_test---------\n\n";
    basic_test(false);
    cout << "\n\n------------- D O N E --------------\n\n";

    // TEST B
    cout << "\n\n-----------running testB------------\n\n";
    testB(false);
    cout << "\n\n------------- D O N E --------------\n\n";

    return 0;
}


void basic_test(bool debug)
{
    double single_price, hold_price;
    int whole, nominator, denominator, number_of_share;
    
    // Test 1
    whole=2, nominator=1, denominator=4, number_of_share=1000;
    single_price = frac_2_double(whole, nominator, denominator);
    hold_price = holding_price(single_price, number_of_share);
    cout << "single price: " << single_price << endl;
    cout << "hold price: " << hold_price << endl;

    // Test 2
    whole=4, nominator=1, denominator=8, number_of_share=100;
    single_price = frac_2_double(whole, nominator, denominator);
    hold_price = holding_price(single_price, number_of_share);
    cout << "single price: " << single_price << endl;
    cout << "hold price: " << hold_price << endl;
}

void testB(bool debug)
{
    // TODO: add more test here
}

/*
---------running basic_test---------

single price: 2.25
hold price: 2250
single price: 4.125
hold price: 412.5


------------- D O N E --------------
*/