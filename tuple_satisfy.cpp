/* 
2/2/21
FROM AGGIE COMPETITIVE PROGRAMMING CLUB 
Given is a positive integer N, How many tuples (A,B,C) of positive integers satisfy 
A×B+C=N?

3 = 3
100 = 473

3 There are 3 tuples of integers that satisfy 
A × B + C = 3 : ( A , B , C ) = ( 1 , 1 , 2 ) , ( 1 , 2 , 1 ) , ( 2 , 1 , 1 ) .

1,000,000 = 13,969,985
*/

#include <iostream>
using namespace std;

int main() {

    int num = 3;
    int counter = 0;

    

    num = num-1;
    int second_iterator = num-1;
    while (num != 0) {
        if (second_iterator > 0 && (num % second_iterator == 0)) {
            if (num != second_iterator) {
                counter = counter + 2;
                second_iterator--;
            }
            else {
                counter = counter + 1;
                second_iterator--;
            }
        }
        else {
            if (second_iterator == 0) {

            }
            else {
            second_iterator = second_iterator - 1;
            }
        
        }
        if (second_iterator == 0) {
            num = num - 1;
            second_iterator = num-1;
        }
    }
    cout << counter;
    return 0;

}