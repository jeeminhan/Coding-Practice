/*A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input
The only input line contains an integer n.

Output
Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤10^6
Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
*/

#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> num_array;
    int num;
    cin >> num;

    if (num == 1) {
        cout << "1";
        return 0;
    }

    if (num < 4) {
        cout << "NO SOLUTION";
        return 0;
    }
    int temp = num;

    for (int i=0; i<num; i++) {
        num_array.push_back(temp-1);
        num_array.push_back(temp-3);
        num_array.push_back(temp);
        num_array.push_back(temp-2);
        num_array.push_back(temp-4);

        temp = temp-5;

        if ((temp) == 3) {
            num_array.insert(num_array.begin(), temp);
            num_array.push_back(temp-2);
            num_array.insert(num_array.begin() + 2, temp-1);
        }
        else if ((temp) == 2) {
            num_array.push_back(temp-1);
            num_array.insert(num_array.begin(), temp);
        }
        else if ((temp) == 1) {
            num_array.insert(num_array.begin(), temp);
        }
        
    }
    for (int i=0; i<num; i++) {
        cout << num_array.at(i) << " ";
    }
}