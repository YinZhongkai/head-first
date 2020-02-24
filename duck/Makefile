OBJS = main.o duck.o flybehavior.o quackbehavior.o

duck: $(OBJS)
	g++ -o duck $(OBJS)

main.o: main.cpp
	g++ -c  main.cpp

duck.o: duck.cpp duck.h flybehavior.h quackbehavior.h
	g++ -c duck.cpp

flybehavior.o: flybehavior.cpp flybehavior.h
	g++ -c flybehavior.cpp

quackbehavior.o: quackbehavior.cpp quackbehavior.h
	g++ -c quackbehavior.cpp

.PHONY: clean
clean:
	-rm duck $(OBJS)
