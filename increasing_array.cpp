/*
2/6/21
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of moves.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    int temp;
    int prevElem;
    long long counter = 0;
    vector<long long> arr;

    cin >> size;

    for (int i=0; i<size; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    prevElem = arr.at(0);

    for (int i=1; i<size; i++) {
        while (arr.at(i)<prevElem) {
            arr.at(i)++;
            counter++;
        }
        prevElem = arr.at(i);
    }
    cout << counter;

}