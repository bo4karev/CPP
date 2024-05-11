#include <iostream>
#include <math.h>

using namespace std;
//using namespace math;

int main(){
int a,b,x;

cout << "Inter 2 digit: " << endl;
cin >> a,b;
if ( a > b ) x = a;
    else x = b ;

cout << "1. -sin(x-5) = " << -sin (x-5) << endl;
cout << "2. ln(x^2) = " << log(x^2) << endl;
cout << "3. sin(x-5) = " << sin(x-5) << endl;
cout << "4. 2^x = " << (2^x) << endl;
cout << "5. cos(x+5)^2 = " << cos(x+5)*cos(x+5)<< endl;

return 0;

}