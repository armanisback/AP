output: billiards.o table1.o ball1.o
	g++ billiards.o table1.o ball1.o -o billiards.out
billiards.o: billiards.cpp
	g++ -c billiards.cpp
table1.o: table1.cpp table1.hpp
	g++ -c table1.cpp
ball1.o: ball1.cpp ball1.hpp
	g++ -c ball1.cpp
clean:
	rm *.o output	
