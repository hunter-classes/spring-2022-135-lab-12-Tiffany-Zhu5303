OBJECTS = vectors.o optimism.o

main: main.o vectors.o optimism.o
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp vectors.h optimism.h

vectors.o: vectors.cpp vectors.h

optimism.o: optimism.cpp optimism.h

tests.o: tests.cpp doctest.h vectors.h optimism.h

clean:
	rm -f main tests main.o tests.o $(OBJECTS)
