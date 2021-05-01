output: billiards2.o table2.o ball2.o
	g++ billiards2.o table2.o ball2.o -o billiards.out
billiards.o: billiards2.cpp
	g++ -c billiards2.cpp
table1.o: table2.cpp table2.hpp
	g++ -c table2.cpp
ball1.o: ball2.cpp ball2.hpp
	g++ -c ball2.cpp
clean:
	rm *.o output
