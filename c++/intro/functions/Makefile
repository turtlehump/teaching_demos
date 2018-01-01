all: definitions passing_variables

definitions: definitions.cpp
	g++ -Wall -pedantic -g -o definitions definitions.cpp

passing_variables: passing_variables.cpp
	g++ -Wall -pedantic -g -o passing_variables passing_variables.cpp

clean:
	rm -f *.o *.exe definitions passing_variables
