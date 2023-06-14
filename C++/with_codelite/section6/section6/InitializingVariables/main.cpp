#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter the width of the room :" ;
    int room_with{0};
    cin >> room_with;
    
    cout << "Enter the lenth of the room :" ;
    int room_lenth{0};
    cin >> room_lenth;
    
    cout << "The area of the room is " << room_with * room_lenth << "square meter" << endl;
    
    return 0;
}