#include <iostream>
using namespace std;

bool is_leap_year( int Y) {
    if (Y % 400 == 0) { //checking if the year is didved by 400
        return true;
    } else if (Y % 100 == 0) {// checking if the year is a century or not 
        return false;
    } else if (Y % 4 == 0) {// checking if the year is divisible by 4 
        return true;
    } else { // checking if the conditions aren't fullfiled 
        return false;
    }
}

int main() {
    int year;
    cout << "Enter a year: "; //prompting the user to enter the year
    cin >> year;
		//checking if the entered year is a leap year
    if (is_leap_year(year)) {
        cout <<"The year "<< year << " is a leap year." <<endl;
    } else {
    	cout <<"The year " << year << " is not a leap year." <<endl;
    }

    return 0;
}

