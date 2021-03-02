#include <iostream>
struct ulamek
{
    int licznik;
    int mianownik;
};

void print(int a, double b,auto c,ulamek ulamek1 , char *wsk, int tab[], int size){

    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;

    std::cout<<ulamek1.licznik<<"/"<<ulamek1.mianownik<<std::endl;
    std::cout<<wsk<<std::endl;
    std::cout<<c<<std::endl;
    for(int i=0;i<size;++i){
        std::cout<<tab[i]<<",";
    }


}

int main() {

    int a=6;
    double b=6.423445;

    ulamek ulamek1 =
            {
                    1,
                    2
            };
    char *wsk = "Siemanko, witam w moim środowisku";
    auto c = 10;
    int size;
    std::cin>>size;
    int tab[size];
    for(int i=0;i<size;++i){
        std::cin>>tab[i];
    }
    print(a,b,c,ulamek1,wsk,tab,size);

    return 0;
}
