#include "Animal.h"

Animal::Animal() : name(""), weight(0.0f), dangerous(false) {}

Animal::Animal(const string& n, float w, bool d)
	: name(n), weight(w), dangerous(d) {}

void Animal::display() const {
	cout << name << ", " << weight << " lbs";
	if (dangerous) {
		cout << " be careful!";
	}
	cout << endl;

}

bool Animal::isDangerous() const {
	return dangerous;
}

