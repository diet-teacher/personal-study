#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    
    
    
    cout << "size of iformation" << endl;
    cout << "==================================" << endl;
    
    cout << "char : " << sizeof(char) << "byte." << endl;
    cout << "int : " << sizeof(int) << "byte." << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << "byte." << endl;
    cout << "short : " << sizeof(short) << "byte." << endl;
    cout << "long : " << sizeof(long) << "byte." << endl;
    cout << "long long : " << sizeof(long long) << "byte." << endl;
    
    cout << "==================================" << endl;
    
    cout << "float : " << sizeof(float) << "byte." << endl;
    cout << "double : " << sizeof(double) << "byte." << endl;
    cout << "long double : " << sizeof(long double) << "byte." << endl;
    
    cout << "==================================" << endl;
    
    cout << "Minimum values : " << endl;
    cout << "char : " << CHAR_MIN << endl;
    cout << "int : " << INT_MIN << endl;
    cout << "short : " << SHRT_MIN << endl;
    cout << "long : " << LONG_MIN << endl;
    cout << "long long : " << LLONG_MIN << endl;
    
    cout << "==================================" << endl;
    
    cout << "Meximum values : " << endl;
    cout << "char : " << CHAR_MAX << endl;
    cout << "int : " << INT_MAX << endl;
    cout << "short : " << SHRT_MAX << endl;
    cout << "long : " << LONG_MAX << endl;
    cout << "long long : " << LLONG_MAX << endl;
    
    cout << "==================================" << endl;
    
    cout << "sizeof using variable names" << endl;
    
    int age{21};
    cout << "age is " << sizeof(age) << "bytes." << endl;
    cout << "age is " << sizeof age << "bytes." << endl;
    
    
    double wage {22.24};
    cout << "wage is " << sizeof(wage) << "bytes." << endl;
    cout << "wage is " << sizeof wage << "bytes." << endl;
    
    return 0;
}