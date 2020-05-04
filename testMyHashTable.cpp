//edited by Sachen Sampath, cs32, 4/28/2020
#include "WordCount.h"
#include "tddFuncs.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {

  // // A sample test.
  // cout<<"Insert Tests"<<endl;

  // MyHashTable I;
  // I.insertItem("Hermione Granger", 27437);
  // I.insertItem("Ron Weasley", 49872);
  // I.insertItem("Harry Potter", 39857);
  // I.insertItem("Tom Riddle", 12984);
  // string expectedI1 = "0:[(Hermione Granger,27437)(Ron Weasley,49872)]\n1:[]\n2:[(Tom Riddle,12984)]\n3:[(Harry Potter,39857)]\n4:[]\n";
  // ASSERT_EQUALS(expectedI1, I.toString());

  // MyHashTable I2;
  // I2.insertItem("Hermione Granger", 27437);
  // I2.insertItem("Ron Weasley", 49872);
  // I2.insertItem("Harry Potter", 39857);
  // I2.insertItem("Tom Riddle", 12984);
  // I2.insertItem("A", 15432);
  // I2.insertItem("B", 15431);
  // string expectedI2 = "0:[(Hermione Granger,27437)(Ron Weasley,49872)(A,15432)]\n1:[(B,15431)]\n2:[(Tom Riddle,12984)]\n3:[(Harry Potter,39857)]\n4:[]\n";
  // ASSERT_EQUALS(expectedI2, I2.toString());

  // // Write your own tests below.
  // cout<<"Delete Tests"<<endl;

  // MyHashTable ht2;
  // ht2.insertItem("Hermione Granger", 27437);
  // ht2.insertItem("Ron Weasley", 49872);
  // ht2.insertItem("Harry Potter", 39857);
  // ht2.insertItem("Tom Riddle", 12984);
  // ht2.deleteItem("Tom Riddle");
  // string expected2 = "0:[(Hermione Granger,27437)(Ron Weasley,49872)]\n1:[]\n2:[]\n3:[(Harry Potter,39857)]\n4:[]\n";
  // ASSERT_EQUALS(expected2, ht2.toString());

  // MyHashTable ht3;
  // ht3.insertItem("Hermione Granger", 27437);
  // ht3.insertItem("Ron Weasley", 49872);
  // ht3.insertItem("Harry Potter", 39857);
  // ht3.insertItem("Tom Riddle", 12984);
  // ht3.deleteItem("Tom Riddle");
  // ht3.deleteItem("Tom Riddle");
  // string expected3 = "0:[(Hermione Granger,27437)(Ron Weasley,49872)]\n1:[]\n2:[]\n3:[(Harry Potter,39857)]\n4:[]\n";
  // ASSERT_EQUALS(expected3, ht3.toString());

  // cout<<"Copy Constructor Tests"<<endl;
  
  // MyHashTable cpy = MyHashTable(I);
  // string expectedC1 = "0:[(Hermione Granger,27437)(Ron Weasley,49872)]\n1:[]\n2:[(Tom Riddle,12984)]\n3:[(Harry Potter,39857)]\n4:[]\n";
  // ASSERT_EQUALS(expectedC1, cpy.toString());

  // cpy.deleteItem("Hermione Granger");
  // string expectedC2 = "0:[(Ron Weasley,49872)]\n1:[]\n2:[(Tom Riddle,12984)]\n3:[(Harry Potter,39857)]\n4:[]\n";
  // ASSERT_EQUALS(expectedC2, cpy.toString());

  // string expectedC3 = "0:[(Hermione Granger,27437)(Ron Weasley,49872)]\n1:[]\n2:[(Tom Riddle,12984)]\n3:[(Harry Potter,39857)]\n4:[]\n";
  // ASSERT_EQUALS(expectedC3, I.toString());
  // return 0;
}
