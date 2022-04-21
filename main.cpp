#include <iostream>

using namespace std;

class Farm {
    public:
    int a;
    int b;
    int length;
    int area;

    int calculateMaxFarmArea(int flen) {
        a = flen/4;
        b = flen/2;
        area = a*b;
    }
};

template <typename T>
T &inputLengthAndValidate(T &val)
{
    while (true) {
        cout << "Please input the available fence length (meters): ";
        if (cin >> val) {
            break;
        } else {
            cout << "Enter a valid integer value!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return val;
}

int main() {

    cout << "Write RUN to start the area calculation algorithm." << endl;
    string start;
    getline(cin,start);

    if (start == "RUN") {
        Farm f1;
        f1.length = inputLengthAndValidate(f1.length);
        f1.calculateMaxFarmArea(f1.length);
        cout << "The maximum possible farm area is: " << f1.area << " square meters." << endl;
        cout << "Lengths of used segments are: 2x " << f1.a << "m and " << f1.b << "m." << endl;
    } else {
        cout << "The program will now terminate." << endl;
    }
    return 0;
}