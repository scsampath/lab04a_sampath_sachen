CXX=clang++
# CXX=g++

CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

BINARIES=testInsert testDelete

all: ${BINARIES}

tests: ${BINARIES}
	./testInsert
	./testDelete

testInsert: testInsert.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

testDelete: testDelete.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
