video: main.o video.o
	g++ -Wall -pedantic -g -o video main.o video.o

main.o: main.cpp video.h
	g++ -Wall -pedantic -g -c main.cpp

video.o: video.h video.cpp
	g++ -Wall -pedantic -g -c video.cpp

clean:
	rm -f *.o *.exe video
