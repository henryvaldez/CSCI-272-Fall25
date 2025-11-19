#include <iostream>
using namespace std;

// h.file

class mynum {
private:
    int value;
public:

    mynum(int val = 0) {
        value = val;
    }

    int getval() const {
        return value;
    }

    // overlood the minus operator
    // this will not change the original object
    mynum operator-() const {
        return mynum(-value);
    }

    // overld the profic ++: ++mynum
    // this will change the current obj 
    mynum operator++() {
        ++value;
        return mynum(value);
    }
};

int main() {
    mynum num(10);

    cout << "original value " << num.getval() << endl;

    mynum negative = -num;
    cout << "after applying -num " << negative.getval() << endl;

    mynum incremented = ++num;
    cout << "After applying ++num, num is: " << num.getval() << endl;
    cout << "value returned by the ++num " << incremented.getval() << endl;

    return 0;
}
