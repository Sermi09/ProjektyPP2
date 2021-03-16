#include <iostream>

class Zwierze{
public:
    std::string gatunek;
    std::string imie;
};
class DobrzeZnanyKolega{
protected:
    std::string skadGoZnam;
    std::string zwierzeDomowe;
};
class CzlowiekZnanyZInternetu: public DobrzeZnanyKolega{
protected:
    std::string gdzie_poznany;
    std::string czymZablysnal;
public:
    void wyp();
};
class CzlowiekZnanyZImienia: public DobrzeZnanyKolega{
protected:
    std::string imie;
};
class CzlowiekZnanyZWidzenia: public CzlowiekZnanyZImienia{
protected:
    std::string cechaCharakterystyczna;
public:
    void wyp();

};

void CzlowiekZnanyZWidzenia::wyp() {
    Zwierze zwierze;
    cechaCharakterystyczna = "Ogromne uszy";
    imie = "Olaf";
    skadGoZnam = "Pozanalismy sie grajsc w pilke na szkolnym boisku";
    zwierzeDomowe = "pies";
    zwierze.gatunek = "owczarek Niemiecki";
    zwierze.imie = "Kebab";
    std::cout<<cechaCharakterystyczna<<std::endl;
    std::cout<<imie<<std::endl;
    std::cout<<skadGoZnam<<std::endl;
    std::cout<<zwierzeDomowe<<std::endl;
    std::cout<<zwierze.gatunek<<std::endl;
    std::cout<<zwierze.imie<<std::endl<<std::endl;
}
void CzlowiekZnanyZInternetu::wyp(){
    Zwierze zwierze;
    gdzie_poznany = "Podczas gry w CSa";
    czymZablysnal = "Ace'm z deagla";
    skadGoZnam = "No z CS'a mowilem";
    zwierzeDomowe = "kot";
    zwierze.gatunek = "Nie wiem, nie znam sie na kotach";
    zwierze.imie = "Kitku";
    std::cout<<gdzie_poznany<<std::endl;
    std::cout<<czymZablysnal<<std::endl;
    std::cout<<skadGoZnam<<std::endl;
    std::cout<<zwierzeDomowe<<std::endl;
    std::cout<<zwierze.gatunek<<std::endl;
    std::cout<<zwierze.imie<<std::endl;
}


int main() {

    CzlowiekZnanyZWidzenia Osoba1;
    CzlowiekZnanyZInternetu Osoba2;
    Osoba1.wyp();
    Osoba2.wyp();

    return 0;
}
