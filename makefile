CXX = c++
CXXFLAGS = -g -Wall -std=c++11
LFLAGS = -lgtest -lpthread
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
PROG = main

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

$(PROG): $(OBJ)
	$(CXX) $^ -o $@ $(LFLAGS)

clean:
	$(RM) *.o $(PROG)
