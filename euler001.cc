#include <iostream>

using namespace std;

int main() {
    unsigned long int result = 0;
    long int n;
    cin >> n;

    long int n3 = (n - 1) / 3;
    long int n5 = (n - 1) / 5;
    long int n15 = (n- 1) / 15;

    result = 3 * (n3 * (n3 + 1) / 2) + 5 * (n5 * (n5 + 1) / 2) - 15 * (n15 * (n15 + 1) / 2);

    cout << result << endl;
    return 0;
}
