#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
    long double num1 = 0 ;
    long double num2 = 0 ;

    cin >> num1 >> num2 ;
    cout << setprecision(15) << ( num1 / num2 ) ;

    return 0 ;
}