main: main.o Firestar.o
	gcc -o  main  main.cpp Laser.cpp Firestar.o -lstdc++  -Xlinker -Map=output.map
Firestar.o: Firestar.cpp
	gcc -c Firestar.cpp
