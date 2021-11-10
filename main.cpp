#include <iostream>
using namespace std;
// stampare a video tutti i
// numeri della serie di Fibonacci che sono minori o uguali di “n”.
int main() {
    int PrimoNum=0, SecondoNum=0, ProssimoNum=0, n=0;
    cin >>n;
    PrimoNum=1;
    SecondoNum=1;
    cout << PrimoNum << endl << SecondoNum << endl;
    for (int i = 2; i < n; i++) {
        ProssimoNum= PrimoNum+SecondoNum;
        PrimoNum= SecondoNum;
        SecondoNum= ProssimoNum;
        if (ProssimoNum<=n){
        cout << ProssimoNum << endl;
        }
    }
    return 0;
}
