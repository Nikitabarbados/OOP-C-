#include <iostream>
#include <fstream>
#include <string>
using namespace std;

__interface ButyStudentom {
    void Study();
    void Sleep();
    void Party();
};

class Nikita : public ButyStudentom {
public:
    void Study() {
        cout << "Никита зубрить конспект перед екзаменом..." << "\n";
    }
    void Sleep() {
        cout << "Никита спить 4 години після пар..." << "\n";
    }
    void Party() {
        cout << "Никита тусить з друзями всю ніч!" << "\n";
    }
};

int main() {
    setlocale(0, "UKR");

    Nikita st;
    st.Study();
    st.Sleep();
    st.Party();
}
