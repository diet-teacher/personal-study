/*******************************************
 * author Won
 * 
 * 
 * ******************************************/



#include <iostream>


// This is the comment

/* This is the multiple
 * line
 * comment*/

int main() {
    
    
    int favorite_number; // this is where mu favorite number is stored
    
    std::cout << "Enter your favorite number between 1 and 100: ";
    
    std::cin >> favorite_number;
    
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" <<std::endl;
    
    return 0;
    
}