CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = zoo
OBJS = Animal.o AnimalsInZoo.o zoo.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

Animal.o: Animal.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c Animal.cpp

AnimalsInZoo.o:AnimalsInZoo.cpp AnimalsInZoo.h Animal.h
	$(CXX) $(CXXFLAGS) -c AnimalsInZoo.cpp
	
zoo.o: zoo.cpp AnimalsInZoo.h Animal.h
	$(CXX) $(CXXFLAGS) -c zoo.cpp
	

clean:
	rm -f $(OBJS) $(TARGET)
