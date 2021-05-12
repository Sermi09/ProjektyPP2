#include <iostream>
#include <cstring>
#include <stdexcept>

class String{
private:
    char* text;
    size_t size;
public:
    String(){
        size = 0;
        text = new char[0];
    }
    String(const String& copy){
        if(copy.text == nullptr){
            throw std::length_error("There is no text!");
        }
        else{
            size = copy.size;
            text = new char[size+1];
            std::cout<<size<<" "<<std::endl;
            std::copy(&copy.text[0],&copy.text[size] ,&text[0]);
            std::cout<<text<<std::endl;
        }
    }
    String(const char* _text){
        if(_text == nullptr){
            throw std::length_error("There is no text!");
        }
        else{
            size = strlen(_text);
            text = new char[size+1];
            std::copy(&_text[0],&_text[size] ,&text[0]);
        }
    }
    ~String(){
        delete [] text;
    }
    String& operator = (const char *new_text){
        if(new_text == nullptr){
            throw std::invalid_argument("new text is empty");
        }
        else{
            size = strlen(new_text);
            delete [] text;
            text = new char[size+1];
            std::copy(&new_text[0],&new_text[size],&text[0]);

            return *this;
        }
    }
    int _size()const{
        return size;
    }
    char* _text()const{
        return text;
    }
    String& operator = (const String &new_text){
        size = new_text.size;
        delete [] text;
        text = new char[size+1];
        std::copy(&new_text.text[0],&new_text.text[size],&text[0]);

        return *this;
    }
    String operator += (const char* text_add){
        int len = strlen(text_add);
        char* temp = new char[size + len + 1];
        std::copy(&text[0],&text[size],&temp[0]);
        delete [] text;
        text = new char [size];
        std::copy(&temp[0],&temp[size],&text[0]);
        delete [] temp;
        std::copy(&text_add[0],&text_add[len-1],&text[size]);
        size +=len;

        return *this;
    }
    friend std::ostream& operator << (std::ostream& os, const String &data){
        for(int i=0; i<data.size; ++i){
            os<<data.text[i];
        }
        return os;
    }
    friend std::istream& operator >> (std::istream &in, String &data){
        std::cout<<"text: "<<std::endl;
        in>>data.text;
        std::cout<<"size: "<<std::endl;
        in>>data.size;
        return in;
    }
};

int main() {

    //Test1
    String string1;
    //Test2
    String string2("test 2");
    //Test3
    String string3(string2);
    std::cout<<string3<<std::endl;
    //Test4
    string1 = "przypisanie";
    std::cout<<string1<<std::endl;
    //Test5
    String string5;
    string5 = string1;
    std::cout<<"string5 = "<<string5<<std::endl;
    //Test6
    string5 += " po dodaniu tekstu ";



    return 0;
}
