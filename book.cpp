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

class Book{
	protected:
		string name;
		Author author;
		int qty = 0;
		double price;
		
	public:
		Book(){
			
		}
		
		Book (string name, Author author, double price){
			this -> name = name;
        	this -> author = author;
        	this -> price = price;
		}
		
		Book(string name, Author author, double price, int qty){
			this -> name = name;
			this -> author = author;
			this -> price = price;
			this -> qty = qty;
		}
		
		string getName(){
			return name;
		}
		
		Author getAuthor(){
			return author;
		}
		
		int getQty(){
			return qty;
		}
		
		double getPrice(){
			return price;
		}
		
		void setPrice(int price){
			this -> price = price;
		}
		
		void setQty(int qty){
			this -> qty = qty;
		}
		
		string toString(string name, Author author, double price, int qty){
			return "Book name: " + name + "\n" + author.toString() "Price: " + to_string(price) + "\n" + "Quantity: " + to_string(qty) + "\n";
		}
};

int main(){
	string name, email, title;
	Author a;
	char gender;
	int qty;
	double price;
	
	cout << "Enter author's name: ";
	cin >> name;
	cout << "Enter author's email: ";
	cin >> email;
	cout << "Enter author's gender: ";
	cin >> gender;
	Author a(name, email, gender);
	cout << "Enter book title: ";
	cin >> title;
	cout << "Enter the quantity: ";
	cin >> qty;
	cout << "Enter the price: ";
	cin >> price;
	Book book(title, a, price, qty);
	
	cout << book.toString(name, a, price, qty);
	
	return 0;
	
}
