#include <iostream>
using namespace std;

float Add(float inp1, float inp2) {
    return inp1 + inp2;
}
float Mult(float inp1, float inp2) {
    return inp1 * inp2;
}
float Div(float inp1, float inp2) {
    return inp1 / inp2;
}
float Sub(float inp1, float inp2) {
    return inp1 - inp2;
}


int main()
{
    char p;
    float inp1, inp2;
    cout << "Hello!\nThis is my first github upload!:3\nSimple Switch Case calculator\n";

    cout << "please enter the first value, the operand, then the second value:\n\n";
    cin >> inp1 >> p >> inp2;

    switch (p) {
    case '*':
        cout << Mult(inp1, inp2);
        break;
    case '+':
        cout << Add(inp1, inp2);
        break;
    case '/':
        cout << Div(inp1, inp2);
        break;
    case '-':
        cout << Sub(inp1, inp2);
        break;
    }
    return 0;
}