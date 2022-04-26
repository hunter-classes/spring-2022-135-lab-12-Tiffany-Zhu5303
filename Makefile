OBJECTS = vectors.o

main: main.o vectors.o
	g++ -o main main.o $(OBJECTS)

tests: tests.o vectors.o
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp vectors.h

vectors.o: vectors.cpp vectors.h

tests.o: tests.cpp doctest.h vectors.h

clean:
	rm -f main tests main.o tests.o $(OBJECTS)
