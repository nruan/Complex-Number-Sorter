all: H2.out

H2.out: ruanH2.o complex.o SetLimits.o
	g++ ruanH2.o complex.o SetLimits.o -o H2.out

ruanH2.o: ruanH2.cpp
	g++ -c ruanH2.cpp

complex.o: complex.cpp
	g++ -c complex.cpp complex.h

SetLimits.o: SetLimits.cpp
	g++ -c SetLimits.cpp SetLimits.h

clean:
	rm *o H2.out *.h.gch

