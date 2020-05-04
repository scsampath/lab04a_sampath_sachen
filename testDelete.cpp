//edited by Sachen Sampath, cs32, 5/3/2020
#include "WordCount.h"
#include "tddFuncs.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {

  // A sample test.
  cout<<"Delete Tests"<<endl;

  WordCount I;
  I.incrWordCount("Word1");
  I.incrWordCount("Word2");
  I.incrWordCount("Word3");
  I.incrWordCount("Words");
  int expectedI1 = 4;
  int expectedI2 = 2;
  int expectedI3 = 3;
  int expectedI4 = 1;
  //getTotalWords
  ASSERT_EQUALS(expectedI1, I.getTotalWords());
  //getNumUniqueWords
  ASSERT_EQUALS(expectedI2, I.getNumUniqueWords());
  //getWordCount
  ASSERT_EQUALS(expectedI3, I.getWordCount("word"));
  ASSERT_EQUALS(expectedI4, I.getWordCount("words"));
  
  ASSERT_EQUALS(2, I.decrWordCount("Word1"));
  //getTotalWords
  ASSERT_EQUALS(3, I.getTotalWords());
  //getNumUniqueWords
  ASSERT_EQUALS(2, I.getNumUniqueWords());
  //getWordCount
  ASSERT_EQUALS(2, I.getWordCount("word"));
  ASSERT_EQUALS(1, I.getWordCount("words"));

  ASSERT_EQUALS(0, I.decrWordCount("words"));
  //getTotalWords
  ASSERT_EQUALS(2, I.getTotalWords());
  //getNumUniqueWords
  ASSERT_EQUALS(1, I.getNumUniqueWords());
  //getWordCount
  ASSERT_EQUALS(2, I.getWordCount("word"));
  ASSERT_EQUALS(0, I.getWordCount("words"));

  I.decrWordCount("");
  //getTotalWords
  ASSERT_EQUALS(2, I.getTotalWords());
  //getNumUniqueWords
  ASSERT_EQUALS(1, I.getNumUniqueWords());
  //getWordCount
  ASSERT_EQUALS(2, I.getWordCount("word"));
  ASSERT_EQUALS(0, I.getWordCount("words"));
  ASSERT_EQUALS(-1, I.decrWordCount(""));
  
}
