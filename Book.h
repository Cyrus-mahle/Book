#include<string>
#include<iostream>
using namespace std;

class Book{
	private:
		string title;
		double costPrice;
		
	public:
		void setBook(string title_,double price);
		void print();
};
