main: main.o LinkedList.o Node.o Integer.o
	g++ main.o LinkedList.o Node.o Integer.o -o main

main.o: main.cpp LinkedList.h Node.h Integer.h
	g++ -c main.cpp

LinkedList.o: LinkedList.cpp LinkedList.h Node.h Integer.h
	g++ -c LinkedList.cpp

Node.o: Node.cpp Node.h Integer.h
	g++ -c Node.cpp

Integer.o: Integer.cpp Integer.h
	g++ -c Integer.cpp

clean:  #delete .os and the main executable -f ignores files that aren't found
	rm -f *.o main