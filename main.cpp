#include <iostream>

using namespace std;

double costimate(int lines);

int main()
{
    cout << "This program estimates the cost of production for a software project under two possible basis." << endl << endl;
    cout << "(1) Function Points (2) Kilo lines of code " << endl;

    cout << "Enter your choice: "; int choice;
    for(cin >> choice; choice > 2; cin >> choice)
        cout << endl << "Sorry! The choice you've entered is invalid. Please try again. " << endl << endl << "Enter your choice: ";

    if(choice-1)
    {
        cout << "Enter the predicted lines of code required for developing this project: ";
        int lines;
        cin >> lines;

        costimate(lines);
    }
    else
    {
        cout << "Enter the values: ";
    }

    cout << "Thank you for using this program. " << endl;

    return 0;
}
