Polis:	Polinomio.o Lab6_Main.o
	g++ Polinomio.o Lab6_Main.o -o Polis

Lab6_Main.o:	Lab6_Main.cpp Polinomio.h
	g++ -c Lab6_Main.cpp

Polinomio.o:	Polinomio.cpp Polinomio.h
	g++ -c Polinomio.cpp

clean:
	rm *.o Polis
