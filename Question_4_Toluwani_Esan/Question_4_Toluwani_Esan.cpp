//Toluwani Esan
//A00569424

#include<iostream>
#include<string>

using namespace std;

const string one = "January";
const string two = "February";
const string three = "March";
const string four = "April";
const string five = "May";
const string six = "June";
const string seven = "July";
const string eight = "August";
const string nine = "September";
const string ten = "October";
const string eleven = "November";
const string twelve = "December";


int main() {

	int num;
	cout << "Enter a number: " << endl;
	cerr << "'The number should be between 1 and 12'" << endl;
	cin >> num;

	while(num){
		if(num>=1 && num <= 12){
			if (num == 1){
				cout <<"The month associated with that number is: "<< one << endl;
				break;
			}
			else if(num == 2){
				cout << "The month associated with that number is: " << two << endl;
				break;
			}
			else if(num == 3){
				cout << "The month associated with that number is: " << three << endl;
				break;
			}
			else if (num == 4) {
				cout << "The month associated with that number is: " << four << endl;
				break;
			}
			else if (num == 5) {
				cout << "The month associated with that number is: " << five << endl;
				break;
			}
			else if (num == 6) {
				cout << "The month associated with that number is: " << six << endl;
				break;
			}
			else if (num == 7) {
				cout << "The month associated with that number is: " << seven << endl;
				break;
			}
			else if (num == 8) {
				cout << "The month associated with that number is: " << eight << endl;
				break;
			}
			else if (num == 9) {
				cout << "The month associated with that number is: " << nine << endl;
				break;
			}
			else if (num == 10) {
				cout << "The month associated with that number is: " << ten << endl;
				break;
			}
			else if (num == 11) {
				cout << "The month associated with that number is: " << eleven << endl;
				break;
			}
			else if (num == 12) {
				cout << "The month associated with that number is: " << twelve << endl;
				break;
			}
		}
		else
			cout << "Enter a number: " << endl;
		cerr << "'The number should be between 1 and 12'" << endl;
		cin >> num;
	}



	return 0;
}