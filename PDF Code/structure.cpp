#include <iostream>
#include <string>

struct Person {
	std::string name;
	int age;
	float height;
};

int main(){
	Person mitu = {"Mitu Gauswami",19,5.1f};
	std::cout <<"Name:"<<mitu.name <<"\nAge:"<< mitu.age<<"\nHeight:"<<mitu.height<< std::endl;
	
	return 0;
}
