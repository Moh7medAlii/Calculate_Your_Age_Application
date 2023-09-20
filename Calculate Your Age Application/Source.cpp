#include <iostream>
using namespace std;

int main()
{
    // Program Logo
    cout << "=========================================\n";
    cout << "==== Calculate Your Age Application =====\n";
    cout << "=========================================\n";

    // Age Calculation
    int Birth_Year;
    cout << "Enter The Year Of Birth: ";
    cin >> Birth_Year;
    int Current_Year;
    cout << "Enter Current Year: ";
    cin >> Current_Year;
    int Age = Current_Year - Birth_Year;
    cout << "Your Age In Years Is: " << Age << " Years" << "\n";
    int Age_in_days = Age * 365;
    cout << "Your Age In Days Is: " << Age_in_days << " Days" << "\n";
    int Age_in_Months = Age * 12;
    cout << "Your Age In Months Is: " << Age_in_Months << " Months" << "\n";
    int Age_in_Hours = 365 * 24;
    cout << "Your Age In Hours Is: " << Age_in_Hours * Age << " Hours" << "\n";


}