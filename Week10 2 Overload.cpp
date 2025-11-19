#include <iostream>
using namespace std;
class Integer{
    private:
    int value; // actual integer value we will wrap
    
    public:
    // constructor
    Integer(int val = 0) {
        value = val;
    }
    int getValue() const {
        return value;
    }
     // overload the binary + operator to add two integer objectss
     // ex. integer c = a + b
     Integer operator + (const Integer & other) const {
         return Integer(this ->value +other.value);
         
}

};

int main() {
    Integer num1 (10);
    Integer num2 (20);
    
    Integer sum = num1+num2;
    cout << "num1 is: " << num1.getValue() << endl;
    cout << "num2 is: " << num2.getValue() << endl;
    
    cout << "sum of num1+num2: " << sum.getValue() << endl;
    
    
    
}






