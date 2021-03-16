#include <iostream>
#include <cstring>

class tekst{
public:
    const char* string;
    int size;
    tekst(){
        string = new char[0];
        size = 0;
    }
    tekst(char* copy_string){
        size_t lenght = strlen(copy_string);
        char *a = new char[lenght+1];
        memcpy(a,copy_string,lenght);
        a[lenght] = '\0';
        string = a;
    }
    ~tekst(){
        delete string;
    }
    tekst(tekst *copy){
        size_t lenght = strlen(copy->string);
        char*a = new char[lenght+1];
        memcpy(a,copy->string,lenght);
        a[lenght]= '\0';
        string = a;
    }
    int get_size(){
        return strlen(string);
    }
    void setNewText(const char* newText){
        size_t lenght = strlen(newText);
        char *a = new char[lenght+1];
        memcpy(a,newText,lenght);
        a[lenght] = '\0';
        delete string;
        string = a;
    }
};

int main() {

    tekst tekst1("No witam cie czlowieku");
    std::cout<<tekst1.string<<" "<<tekst1.get_size()<<std::endl;
    tekst tekst2(tekst1);
    std::cout<<tekst2.string<<" "<<tekst2.get_size()<<std::endl;
    tekst2.setNewText("Ja tylko chce tylko zdac ten rok");
    std::cout<<tekst2.string<<" "<<tekst2.get_size()<<std::endl;

    return 0;
}
