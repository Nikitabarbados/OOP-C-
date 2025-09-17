#include <iostream>
using namespace std;

class Continent {
public:
    virtual void Info() {
        cout << "Some continent" << "\n";
    }
};

class Africa : public Continent {
public:
    void Info() {
        cout << "Africa" << "\n";
    }
};

class NorthAmerica : public Continent {
public:
    void Info() {
        cout << "North America" << "\n";
    }
};

class Herbivore {
protected:
    int weight;
    bool life;
public:
    Herbivore(int w = 50) {
        weight = w;
        life = true;
    }
    virtual void EatGrass() {
        weight += 10;
    }
    int GetWeight() {
        return weight; 
    }
    bool IsAlive() { 
        return life; 
    }
    void Die() { 
        life = false; 
    }

    virtual void Info(NorthAmerica) {
        cout << "Herbivore, weight = " << weight << " , life = " << life << "\n";

    }
};

class Wildebeest : public Herbivore {
public:
    Wildebeest() : Herbivore(40) {}
    void Info() {
        cout << "Wildebeest, weight = " << weight << ", life = " << life << "\n";
    }
};

class Bison : public Herbivore {
public:
    Bison() : Herbivore(60) {}
    void Info() {
        cout << "Bison, weight = " << weight << " , life = " << life << "\n";
    }
};

class Carnivore {
protected:
    int power;
public:
    Carnivore(int p = 50) {
        power = p; 
    }

    virtual void Eat(Herbivore* herbivore) {
        if (!herbivore->IsAlive()) {
            cout << "Herbivore already dead!" << "\n";
            return;
        }
        if (power > herbivore->GetWeight()) {
            power += 10;
            herbivore->Die();
            cout << "Carnivore ate herbivore! Power = " << power << "\n";
        }
        else {
            power -= 10;
            cout << "Carnivore failed!" << "\n";
        }
    }

    virtual void Info() {
        cout << "Carnivore, power = " << power << "\n";
    }
};

class Lion : public Carnivore {
public:
    Lion() : Carnivore(70) {}
    void Info() {
        cout << "Lion, power = " << power << "\n";
    }
};

class Wolf : public Carnivore {
public:
    Wolf() : Carnivore(55) {}
    void Info() {
        cout << "Wolf, power = " << power << "\n";
    }
};

int main() {
    srand(time(0));

    Herbivore* herbivores[5];
    for (int i = 0; i < 5; i++) {
        if (rand() % 2 == 0) herbivores[i] = new Wildebeest();
        else herbivores[i] = new Bison();
    }

    Carnivore* carnivores[5];
    for (int i = 0; i < 5; i++) {
        if (rand() % 2 == 0) carnivores[i] = new Lion();
        else carnivores[i] = new Wolf();
    }

    for (int i = 0; i < 10; i++) {
        int r = rand() % 4;
        if (r == 0) {
            Wildebeest w; 
            w.Info();
        }
        else if (r == 1) {
            Bison b; 
            b.Info();
        }
        else if (r == 2) {
            Lion l; 
            l.Info();
        }
        else {
            Wolf w; 
            w.Info();
        }
    }
};