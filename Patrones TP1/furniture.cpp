#include <iostream>
using namespace std;

//Clase abstracta para cada tipo de mueble
class Chair {
public:
    virtual void sitOn() = 0;
};

class Sofa {
public:
    virtual void giveMassage() = 0;
};

class CoffeeTable {
public:
    virtual void openStorage() = 0;
};

//Clases concretas para cada tipo de mueble y su estilo
class ModernChair : public Chair {
public:
    void sitOn() override {
        std::cout << "Sentandose en una silla moderna." << std::endl;
    }
};

class ModernSofa : public Sofa {
public:
    void giveMassage() override {
        std::cout << "Recibiendo masajes en un sofa moderno." << std::endl;
    }
};

class ModernCoffeeTable : public CoffeeTable {
public:
    void openStorage() override {
        std::cout << "Abriendo cajon de una mesa moderna." << std::endl;
    }
};

class VictorianChair : public Chair {
public:
    void sitOn() override {
        std::cout << "Sentandose en una silla victoriana." << std::endl;
    }
};

class VictorianSofa : public Sofa {
public:
    void giveMassage() override {
        std::cout << "Recibiendo masajes en un sofa victoriano." << std::endl;
    }
};

class VictorianCoffeeTable : public CoffeeTable {
public:
    void openStorage() override {
        std::cout << "Abriendo cajon de una mesa victoriana." << std::endl;
    }
};

class ArtDecoChair : public Chair {
public:
    void sitOn() override {
        std::cout << "Sentandose en una silla Art Deco." << std::endl;
    }
};

class ArtDecoSofa : public Sofa {
public:
    void giveMassage() override {
        std::cout << "Recibiendo masajes en un sofa Art Deco." << std::endl;
    }
};

class ArtDecoCoffeeTable : public CoffeeTable {
public:
    void openStorage() override {
        std::cout << "Abriendo cajon de una mesa Art Deco." << std::endl;
    }
};

//Fabrica abstracta para crear muebles
class FurnitureFactory {
public:
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
    virtual CoffeeTable* createCoffeeTable() = 0;
};

// Fabricas concretas para cada estilo de mueble
class ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override {
        return new ModernChair();
    }

    Sofa* createSofa() override {
        return new ModernSofa();
    }

    CoffeeTable* createCoffeeTable() override {
        return new ModernCoffeeTable();
    }
};


class VictorianFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override {
        return new VictorianChair();
    }

    Sofa* createSofa() override {
        return new VictorianSofa();
    }

    CoffeeTable* createCoffeeTable() override {
        return new VictorianCoffeeTable();
    }
};

class ArtDecoFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() override {
        return new ArtDecoChair();
    }

    Sofa* createSofa() override {
        return new ArtDecoSofa();
    }

    CoffeeTable* createCoffeeTable() override {
        return new ArtDecoCoffeeTable();
    }
};

int main() {
    //Se crean las Fabricas de cada estilo de mueble, se crean los objetos de cada uno y se utilizan
    FurnitureFactory* modernFactory = new ModernFurnitureFactory();

    Chair* modernChair = modernFactory->createChair();
    Sofa* modernSofa = modernFactory->createSofa();
    CoffeeTable* modernCoffeeTable = modernFactory->createCoffeeTable();

    modernChair->sitOn();
    modernSofa->giveMassage();
    modernCoffeeTable->openStorage();

    cout << " " << endl; 
    
    FurnitureFactory* victorianFactory = new VictorianFurnitureFactory();

    Chair* victorianChair = victorianFactory->createChair();
    Sofa* victorianSofa = victorianFactory->createSofa();
    CoffeeTable* victorianCoffeeTable = victorianFactory->createCoffeeTable();

    victorianChair->sitOn();
    victorianSofa->giveMassage();
    victorianCoffeeTable->openStorage();

    cout << " " << endl; 
    
    FurnitureFactory* artdecoFactory = new ArtDecoFurnitureFactory();

    Chair* artdecoChair = artdecoFactory->createChair();
    Sofa* artdecoSofa = artdecoFactory->createSofa();
    CoffeeTable* artdecoCoffeeTable = artdecoFactory->createCoffeeTable();

    artdecoChair->sitOn();
    artdecoSofa->giveMassage();
    artdecoCoffeeTable->openStorage();

    delete modernFactory;
    delete modernChair;
    delete modernSofa;
    delete modernCoffeeTable;
    delete victorianFactory;
    delete victorianChair;
    delete victorianSofa;
    delete victorianCoffeeTable;
    delete artdecoFactory;
    delete artdecoChair;
    delete artdecoSofa;
    delete artdecoCoffeeTable;

    return 0;
}
