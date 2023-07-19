#include <bits/stdc++.h>

using namespace std;

class Human {
public:
	static int age;
	string name;
public:
	Human(){
		cout<<"Default Contructer called"<<endl;
	}
	Human(int age, string name){
		cout<<"Parameterized constructor called"<<endl;
		this->age = age;
		this->name = name;
	}
	Human (Human &h){
		this->age = h.age;
		this->name = h.name;
	}
	~Human(){
		cout<<"Destructor is called...!";
		
	}

	static void sayHello(){
		cout<<"\nHello CHinmay the one man army\n"<< age; // static functions access only static members
	}
};

int Human :: age = 30; // static keyword need to eb initialize out of the class

void update(int a){
	a++;
}

int main(){

#ifndef ONLINE_JUDGE 
	freopen("input.txt","r",stdin);  
	freopen("output2.txt","w",stdout); 
#endif

	
	Human h2(10, "Chinmay");
	Human h(h2);

	h.age = 70;
	h2.name = "kuman";

	cout<<"H1 Details :" << Human::age << " " << h.name<<endl;

	cout<<"H2 Details :" << Human::age << " " << h2.name<<endl;

	Human :: sayHello();
	Human *j = new Human();
	
	delete j; // automatically calls destructor 




}