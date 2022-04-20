#include <iostream>

using namespace std;

class Farm {
public:
    int a;
    int b;
    int length;
    int area;

    int calculate(int flen) {
        a = flen/4;
        b = flen/2;
        area = a*b;
    }
};

int main() {

    cout << "Write RUN to start the area calculation algorithm." << endl;
    string start;
    getline(cin,start);

    if (start == "RUN") {
        Farm f1;
        cout << "Please input the available fence length (meters)." << endl;
        cin>>f1.length;
        f1.calculate(f1.length);
        cout << "The maximum possible farm area is: " << f1.area << " square meters." << endl;
        cout << "The segment lengths used are 2x " << f1.a << "m and " << f1.b << "m." << endl;
    } else {
        cout << "The program will now terminate." << endl;
    }
    return 0;
}