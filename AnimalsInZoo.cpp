#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}

AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals(1), animal(a) {}

void AnimalsInZoo::display() const {
	cout << "Number of animals: " << numAnimals << endl;
	if (numAnimals > 0) {
		animal.display();
	}
}


