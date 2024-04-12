#include <iostream>

using namespace std;

class Fraction {
private:
    int a;
    int b;
public:
    void setA(int num) {
        a = num;
    }

    void setB(int num) {
        b = num;
    }

    float divide() {
        return a/b;
    }

    float multiply() {
        return a*b;
    }

    int subtract() {
        return a-b;
    }

    int add() {
        return a+b;
    }

};

int main() {
    Fraction myFract;
    myFract.setA(4);
    myFract.setB(2);

    cout << myFract.divide() << endl;
    cout << myFract.multiply() << endl;
    cout << myFract.subtract() << endl;
    cout << myFract.add() << endl;
}