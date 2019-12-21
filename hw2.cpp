// 8. (Numerical) A formula to raise a real number, a, to the real power, b, is given by the formulaab = e[b × ln(a)]where a  must  be  positive  and  b  must  be  positive  or  0.  Using  this  formula,  write  a  function named power() that accepts a and b as real values and returns ab.

#include <iostream>
#include <cmath>
using namespace std;

//function declared

double power(double, double);

//main function
int main()
{
    // declare variables
    double base;
    double raise;

    // prompt user to enter base (a) value
    cout << "Enter base (must be positive): ";
    cin >> base;

    // ensure base is positive & prompt user if not
    do{
        if (base < 1){
                cout << "Invalid number!" << endl << "Please enter a positive value for base: ";
                cin >> base;
            }
    }
    while(base<1);
   
    // prompt user to enter power (b) value
    cout << "Enter power (must be positive or 0) : ";
    cin >> raise;

    // ensure power is positive or 0 & prompt user if not
    do{
        if (raise < 0){
            cout << "Invalid Number!" << endl << "Enter a positive value or 0 for power: ";
            cin >> raise;
        }
    }
    while(raise < 0);

    // Print results to console
    cout << base << "^" << raise << " = " << power(base,raise) << endl;

    return 0;
}

// Power function definition
double power(double base, double p)
{
    double result=1;
    result=exp(p * log(base));
    return result;
}
