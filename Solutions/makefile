main: main.o Integer.o
	g++ main.o Integer.o -o main

main.o: main.cpp LinkedList.h Node.h Integer.h
	g++ -c main.cpp

Integer.o: Integer.cpp Integer.h
	g++ -c Integer.cpp

clean:  #delete .os and the main executable -f ignores files that aren't found
	rm -f *.o main