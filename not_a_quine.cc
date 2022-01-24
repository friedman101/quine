#include <iostream>
#include <fstream>

int main () {
    using namespace std;
    string line;
    ifstream myfile("not_a_quine.cc");
    while (getline (myfile,line)) {
        cout << line << '\n';
    }
    return 0;
}
