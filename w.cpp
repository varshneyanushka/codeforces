#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int, int> solveTestCase(int a, int b, int c) {
    // Check the parity of the counts
    int parityCount[3] = {a % 2, b % 2, c % 2};

    // If all counts have different parity, it is not possible to have only one or two types of digits remaining
    if (parityCount[0] != parityCount[1] && parityCount[1] != parityCount[2] && parityCount[0] != parityCount[2]) {
        return make_tuple(0, 0, 0);
    }

    // If all counts have the same parity, it is possible to have only one type of digit remaining
    if (parityCount[0] == parityCount[1] && parityCount[1] == parityCount[2]) {
        return make_tuple(1, 1, 1);
    } else {
        // If two counts have the same parity, it is possible to have only two types of digits remaining
        return (parityCount[0] == parityCount[1]) ? make_tuple(1, 1, 0) :make_tuple(0, 1, 1);
    }
}

int main() {
    // Input the number of test cases
    int t;
    std::cin >> t;

    // Process each test case
    for (int i = 0; i < t; ++i) {
        // Input the counts of digits
        int a, b, c;
        std::cin >> a >> b >> c;

        // Solve the test case and print the result
        auto result = solveTestCase(a, b, c);
        std::cout << std::get<0>(result) << " " << std::get<1>(result) << " " << std::get<2>(result) << std::endl;
    }

    return 0;
}
