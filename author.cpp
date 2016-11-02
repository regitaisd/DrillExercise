#include <iostream>
#include <string>
using namespace std;

class Author{
	string name;
	string email;
	char gender;
	
	public:
		Author(){
			
		}
		
		Author(string name, string email, char gender){
			name = " ";
			email = " ";
			gender = ' ';
		}
		
		string getName(){
			return name;
		}
		
		string getEmail(){
			return email;
		}
		
		char getGender(){
			return gender;
		}
		
		void setEmail(string email){
			this -> email = email;
		}
		
		string toString(string name, string email, char gender){
			return "Name: " + name + "\n" + "Email: " + email + "\n" + "Gender: " + gender + "\n";
		}
};

int main(){
	string name, email;
	char gender;
	
	cout << "Enter name of author: ";
	cin >> name;
	cout << "Enter e-mail of author: ";
	cin >> email;
	cout << "Enter gender of author (M/F): ";
	cin >> gender;
	cout << endl;
	
	Author author(name, email, gender);
	
	cout << author.toString(name, email, gender);
	
	return 0;
}
