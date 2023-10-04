#include <iostream>
using namespace std;

int main() {
    for(int start : { 0, 9, 10}) {
        int i = start;
        for (; i < 10; ++i) {
            cout << i << ' ';
        }
        cout << "/ " << i << endl;
        i = start;


        do {

            cout << i << ' ';
            ++i;
        } while (i < 10);




        cout << "/ " << i << endl;
        cout << endl;
    }
}