#include "AnimalsInZoo.h"
#include "Animal.h"
#include <iostream>
using namespace std;

int main() {
	Animal panda("Giant Panda", 1869, false);
	Animal tiger("Tiger", 1900, true);

	AnimalsInZoo emptyZoo;
	AnimalsInZoo pandaZoo(panda);
	cout << "Empty Zoo:" << endl;
	emptyZoo.display();
	
	cout << "\nZoo with Panda:" << endl;
	pandaZoo.display();

	cout << "\nAnother animal on its own:" << endl;
    	tiger.display();  // direct Animal object display
	return 0;

}
