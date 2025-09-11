#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
	private:
		string name;
		float weight;
		bool dangerous;

	public:
		Animal();
		Animal(const string& n, float w, bool d);

		void display() const;

		string getName() const { return name;}
		float getWeight() const { return weight;}
		bool isDangerous() const;
	};

#endif
