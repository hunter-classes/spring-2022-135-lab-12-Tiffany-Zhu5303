OBJECTS = vectors.o optimism.o fusion.o pairwise.o
HFILES = vectors.h optimism.h fusion.h pairwise.h

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp $(HFILES)

vectors.o: vectors.cpp vectors.h

optimism.o: optimism.cpp optimism.h

fusion.o: fusion.cpp fusion.h

pairwise.o: pairwise.cpp pairwise.h

tests.o: tests.cpp doctest.h $(HFILES)

clean:
	rm -f main tests main.o tests.o $(OBJECTS)
