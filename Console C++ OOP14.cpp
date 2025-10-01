#include <iostream>
#include <string>
using namespace std;

class Ability {
public:
    virtual string getName() = 0;
    virtual ~Ability() {}        
};

class Flight : public Ability {
public:
    string getName() override { 
        return "Політ";
    }
};

class SuperStrength : public Ability {
public:
    string getName() override {
        return "Суперсила"; 
    }
};

class SuperSpeed : public Ability {
public:
    string getName() override { 
        return "Супершвидкість";
    }
};

class XRayVision : public Ability {
public:
    string getName() override { 
        return "Рентгенівський зір"; 
    }
};

class Bulletproof : public Ability {
public:
    string getName() override { 
        return "Куленепробивність"; 
    }
};

class Good {
public:
    virtual string getAlignment() = 0;
    virtual ~Good() {}
};

class Bad {
public:
    virtual string getAlignment() = 0;
    virtual ~Bad() {}
};

class Human {
public:
    virtual string getRace() = 0;
    virtual ~Human() {}
};

class Animal {
public:
    virtual string getRace() = 0;
    virtual ~Animal() {}
};

class God {
public:
    virtual string getRace() = 0;
    virtual ~God() {}
};

class Superhero {
protected:
    string name;
    Ability* abilities[5];
    int abilityCount;
public:
    Superhero(string n) : name(n), abilityCount(0) {}

    virtual ~Superhero() {
        for (int i = 0; i < abilityCount; i++) {
            delete abilities[i];
        }
    }

    void addAbility(Ability* a) {
        if (abilityCount < 5) {
            abilities[abilityCount] = a;
            abilityCount++;
        }
    }

    string getName() { 
        return name; 
    }

    bool canFly() {
        for (int i = 0; i < abilityCount; i++) {
            if (abilities[i]->getName() == "Політ") 
                return true;
        }
        return false;
    }

    void showAbilities() {
        cout << name << " має здібності: ";
        for (int i = 0; i < abilityCount; i++) {
            cout << abilities[i]->getName() << " ";
        }
        cout << "\n";
    }
};

class TonyStark : public Superhero, public Human, public Good {
public:
    TonyStark() : Superhero("Тоні Старк") {
        addAbility(new Flight());
        addAbility(new Bulletproof());
    }
    string getRace() override { 
        return "Людина";
    }
    string getAlignment() override { 
        return "Добрий"; 
    }
};

class Hulk : public Superhero, public Human, public Good {
public:
    Hulk() : Superhero("Халк") {
        addAbility(new SuperStrength());
    }
    string getRace() override {
        return "Людина";
    }
    string getAlignment() override {
        return "Добрий"; 
    }
};

class Groot : public Superhero, public Animal, public Good {
public:
    Groot() : Superhero("Грут") {
        addAbility(new SuperStrength());
    }
    string getRace() override {
        return "Тварина";
    }
    string getAlignment() override {
        return "Добрий"; 
    }
};

class Thor : public Superhero, public God, public Good {
public:
    Thor() : Superhero("Тор") {
        addAbility(new Flight());
        addAbility(new SuperStrength());
    }
    string getRace() override {
        return "Божество"; 
    }
    string getAlignment() override {
        return "Добрий"; 
    }
};

class Mystique : public Superhero, public Human, public Bad {
public:
    Mystique() : Superhero("Містик") {
        addAbility(new SuperSpeed());
    }
    string getRace() override {
        return "Людина"; 
    }
    string getAlignment() override {
        return "Злий"; 
    }
};

int main() {
    Superhero* heroes[5];
    heroes[0] = new TonyStark();
    heroes[1] = new Hulk();
    heroes[2] = new Groot();
    heroes[3] = new Thor();
    heroes[4] = new Mystique();

    cout << "Усі герої та їх здібності:" << "\n";
    for (int i = 0; i < 5; i++) {
        heroes[i]->showAbilities();
    }
    cout << "\n";

    cout << "Герої, які можуть літати:" << "\n";
    for (int i = 0; i < 5; i++) {
        if (heroes[i]->canFly()) {
            cout << heroes[i]->getName() << "\n";
        }
    }
    for (int i = 0; i < 5; i++)
        delete heroes[i];
}