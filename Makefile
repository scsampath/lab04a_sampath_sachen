CXX=clang++
# CXX=g++

CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

BINARIES=testMyHashTable

all: ${BINARIES}

tests: ${BINARIES}
	./testMyHashTable

testMyHashTable: testMyHashTable.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
