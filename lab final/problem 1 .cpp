#include <iostream>
using namespace std;

class ManchesterUnited {
    private:
        int coach;
        int player;
    public:
        void getdata() {
            cout << "Enter coach and player: ";
            cin >> coach >> player;
        }
        void operator++() {
            ++coach;
            ++player;
        }
        bool operator<(ManchesterUnited &obj) {
            return (coach < obj.coach && player < obj.player);
        }
};

int main() {
    ManchesterUnited ronaldo, fernandes;
    ronaldo.getdata();
    ++ronaldo;
    fernandes.getdata();
    cout << "Before incrementing Ronaldo: ";
    if (ronaldo < fernandes) {
        cout << "Ronaldo is less than Fernandes." << endl;
    } else {
        cout << "Ronaldo is greater than Fernandes." << endl;
    }
    ++ronaldo;
    cout << "After incrementing Ronaldo: ";
    if (ronaldo < fernandes) {
        cout << "Ronaldo is less than Fernandes." << endl;
    } else {
        cout << "Ronaldo is greater than Fernandes." << endl;
    }
    return 0;
}
Write to Riduan Islam
