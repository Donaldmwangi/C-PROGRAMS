#include <iostream>
#include <string>

using namespace std;

int main (){
	string bookID;
	int dueDate,returnDate;
	
	cout << "Enter Book ID:";
	cin >> bookID;
	cout << "Enter Due Date (in days): ";
	cin >> dueDate;
	cout << "Enter Return Date (in days):";
	cin >> returnDate;
	
	
	int daysOverdue = returnDate - dueDate;
	double fineRate = 0.0;
	double fineAmount = 0.0;
	
	if(daysOverdue > 0){
		if (daysOverdue <= 7){
			fineRate = 20.0;
		} else if (daysOverdue <= 14) {
			fineRate = 50.0;
		}else{
			fineRate = 100.0;
		}
		
		fineAmount = daysOverdue * fineRate;
	} else{
		daysOverdue = 0;
	}
	
	cout << "\nBook Details and Fine Information:\n";
	cout << "Book ID: " << bookID << endl;
	cout << "Due Date:" << dueDate << endl;
	cout <<"Return Date:" << returnDate << endl;
	cout << "Days Overdue : " << daysOverdue << endl;
	cout <<"Fine Rate Ksh " << fineRate << "per day" << endl;
	cout <<"Total Fine Amount : Ksh " << fineAmount << endl;
	
	return 0;
	
}
