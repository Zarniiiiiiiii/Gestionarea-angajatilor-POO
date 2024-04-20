#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Aici avem definirea clasei pentru un angajat
class Angajat {
private:
    string nume;
    string pozitie;
    int salariu;

public:
    // Aici creem constructor
    Angajat(string nume, string pozitie, int salariu) {
        this->nume = nume;
        this->pozitie = pozitie;
        this->salariu = salariu;
    }

    // Aici creem destructor
    ~Angajat() {
        cout << "Angajatul " << nume << " a fost concediat." << endl;
    }

    // Aici avem metoda pentru afisarea informatiilor despre angajat
    void afisareInformatii() {
        cout << "Nume: " << nume << endl;
        cout << "Pozitie: " << pozitie << endl;
        cout << "Salariu: " << salariu << " RON" << endl;
        cout << endl;
    }

    // Aici avem metoda pentru actualizarea salariului
    void actualizareSalariu(int noulSalariu) {
        salariu = noulSalariu;
        cout << "Salariul pentru angajatul " << nume << " a fost actualizat la " << salariu << " RON." << endl;
    }
};

int main() {
    // Creem trei obiecte angajat
    Angajat angajat1("Catalina Radu", "Manager", 5000);
    Angajat angajat2("George Zarnescu", "Programator", 4000);
    Angajat angajat3("Ana Duta", "Contabil", 4500);

    // Afisam informatiilor despre angajati
    cout << "Informatii despre angajatii companiei:" << endl;
    angajat1.afisareInformatii();
    angajat2.afisareInformatii();
    angajat3.afisareInformatii();

    // Actualizam salariului pentru un angajat
    angajat1.actualizareSalariu(5500);

    return 0;
}
