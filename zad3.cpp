#include <iostream>

std::string change_d(std::string text){
for(auto& c : text){
    if(c=='d') c='D';
}
    return text;
}

int main() {

    std::string new_text;
    std::string text = "gdybys ujrzec chcial nadwislanski swit juz dzis wyruszaj ze mna tam";
    std::cout<<text<<std::endl;
    new_text=change_d(text);
    std::cout<<new_text<<std::endl;

    return 0;
}
