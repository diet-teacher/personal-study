#include <iostream>

using namespace std;

int main() {
    
    
    /******************************************************
     * Character types
     ***************************************************** */
    char middle_initial {'S'};
    cout << "My middle initial is " << middle_initial << endl;
    
    
    /******************************************************
     * Integer types
     ***************************************************** */
    unsigned short int exam_score {80};
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {200};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
    
    long people_in_Incheon {30000000};
    cout << "There are about " << people_in_Incheon << " people in Incheon" << endl;
    
    long people_on_earth {7'600'000'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    long people_on_moon = 7'600'000'000'000;
    cout << "There are about " << people_on_moon << " people on earth" << endl;
    
    
    long long distance_to_alpha_centauri{9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    
    /******************************************************
     * Floating point types
     ***************************************************** */
     
     float car_payment {401.21};
     cout << "My car payment is " << car_payment << " dollars" << endl;
     
     double pi {3.141592};
     cout << "PI is " << pi << endl;
     
     long double large_amount {2.7e120};
     cout << large_amount << " is a very big number" << endl;
     
     
    /******************************************************
     * Boolean types
     ***************************************************** */
     
     bool game_over {false};
     cout << "The value of game over is " << game_over << endl;
     
     bool game_not_over {true};
     cout << "The value of game over is " << game_not_over << endl;
     
      /******************************************************
     * Overflow example
     ***************************************************** */
    
    short value1 {30000};
    short value2 {1000};
    long product {value1*value2};
    
    cout << "The times of " << value1 << " and " << value2 << " is " << product << endl;
    
    return 0;
}