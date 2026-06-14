#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main () {
    string firstName, lastName;
    double baseSalary, commissionPercent, totalSales, expenses;
    string fileName;
    ifstream inFile;
    
    cout << "Enter the input file name: ";
    cin >> fileName;

    inFile.open(fileName.c_str());

    inFile >> firstName >> lastName;
    inFile >> baseSalary >> commissionPercent;
    inFile >> totalSales; 
    inFile >> expenses;
    
    inFile.close();

    double commissionEarned = totalSales * (commissionPercent / 100.0);
    double totalPay = baseSalary + commissionEarned + expenses;

    cout << endl;
    cout << "Payroll data for " << firstName << " " << lastName << endl;
    cout << endl;

    cout << fixed;

    cout << left << setw(16) << "Base Salary:"
         << right << setw(10) << setprecision(2) << baseSalary << endl;
        
    cout << left << setw(16) << "Commission:" 
         << right << setw(10) << setprecision(2) << commissionEarned
         << " (" << setprecision(1) << commissionPercent << "% of " << setprecision(2) << totalSales << ")" << endl;

    cout << left << setw(16) << "Expenses:"
         << right << setw(10) << setprecision(2) << expenses << endl;

    cout << setw(26) << "--------" << endl;
    
    cout << left << setw(16) << "Total:"
         << right << setw(10) << setprecision(2) << totalPay << endl;

   return 0;
}
 



