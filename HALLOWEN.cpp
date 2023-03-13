#include <iostream>
using namespace std;

int main() {
    string M,H;
    cin >> M >> H;
    if((M == "OCT" && H == "31") || (M == "DEC" && H == "25")) {
        cout << "yup" << endl;
    }
    else {
        cout << "nope" << endl;
    }
}
