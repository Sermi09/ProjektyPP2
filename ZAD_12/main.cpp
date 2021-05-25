#include <iostream>
#include "VectoredList.h"
using namespace std;

//Zadanie od Pauliny :)

int main() {

    //MOJE

    //TEST 1 (operator +)
    std::cout<<"[TEST 1]: "<<std::endl;
    VectoredList l_1, l_2;
    std::cout<<"l_1: ";
    for(int i=0;i<20;++i){
        l_1.push_back(to_string(i));
    }
    for(int i=10;i<30;++i){
        l_2.push_back(to_string(i));
    }
    for(int i=0;i<l_1.get_size();++i){
        std::cout<<l_1[i]<<" ";
    }
    std::cout<<std::endl<<"l_2: ";
    for(int i=0;i<l_2.get_size();++i){
        std::cout<<l_2[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"(l_1+l_2)[4]: "<<(l_1+l_2)[4] <<std::endl<<std::endl;

    //TEST 2 (konstruktor przenoszący)

    std::cout<<"[TEST 2]:"<<std::endl;
    VectoredList l_3;
    for(int i=0;i<15;++i){
        l_3.push_back(to_string(i));
    }
    std::cout<<"l_3: ";
    for(int i=0;i<l_3.get_size();++i){
        std::cout<<l_3[i]<<" ";
    }
    std::cout<<std::endl;
    const VectoredList l_4 = move(l_3);
    std::cout<<"l_4: ";
    for(int i=0;i<l_4.get_size();++i){
        std::cout<<l_4[i]<<" ";
    }
    std::cout<<std::endl<<std::endl;


    //TEST 3 (przenoszący +)

    std::cout<<"[TEST 3]: "<<std::endl;
    VectoredList l_5;
    for(int i=0;i<15;++i){
        l_5.push_back(to_string(i));
    }
    std::cout<<"l_5: ";
    for(int i=0;i<l_5.get_size();++i){
        std::cout<<l_5[i]<<" ";
    }
    std::cout<<std::endl;
    VectoredList l_6;
    l_6 = move(l_5);
    std::cout<<"l_6: ";
    for(int i=0;i<l_6.get_size();++i){
        std::cout<<l_6[i]<<" ";
    }
    std::cout<<std::endl<<std::endl;

    //TEST 4 (assign)
    std::cout<<"[TEST 4]: "<<std::endl;
    std::vector<string> vector1{"q","w","e","r","t","y"};
    std::cout<<"vector1: ";
    for(auto &it: vector1){
        cout<<it<<" ";
    }
    std::cout<<std::endl;
    VectoredList l_7;
    l_7.assign(move(vector1));
    std::cout<<"l_7: ";
    for (size_t index = 0; index < l_7.get_size();++index){
        std::cout<<l_7[index]<<" ";
    }
    std::cout<<std::endl;

    //PAULINY

    /*
    cout << endl << "[ TEST 1 ]" << endl;
    VectoredList v;
    for (int i = 0; i < 101; ++i)
        v.push_back(to_string(i));
    for (int i = 0; i < 101; ++i)
    {
        cout<< v[100-i]<<" ";
        if (i % 10 == 0)
            cout << endl;
    }
    cout << endl << "[ TEST 4 ]" << endl;
    VectoredList v2;
    v2.push_back(to_string(2));
    cout << "Size before using = "<<v2.get_size() << endl;
    v2 = v;
    for (int i = 0; i <= v2.get_size(); ++i)
    {
        cout << v2[i] << " ";
        if (i % 10 == 9)
            cout << endl;
    }
    cout << endl << "\n[ TEST begin() i end(), ++, *]" << endl;
    VectoredList::VectoredListIterator it(v2);
    cout << it.get() <<endl;
    ++it;
    cout << it.get() <<endl;
    VectoredList::VectoredListIterator it2(v2,15);
    cout << it2.get() <<endl;
    cout<< "*it2: "<< *it2 << endl;
    cout<< "v2 begin(): "<< v2.begin().get() << endl;
    cout<< "v2 end(): "<< v2.end().get() << endl;
    cout<< "return index it2: "<< it2.return_index(v2) << endl;
    cout << endl << "[TEST ZAKRESOWE FOR]" << endl;;
    for (const auto& element : v2)
    {
        cout << element << endl;
    }

    cout << endl << "[ TEST 3 erase ]" << endl;
    //doadanie 22 elementow
    for(int i =0; i < 22; ++i)
    {
        v2.push_back(to_string(22+i));
    }
    cout <<"Size before erasing: " <<v2.get_size() << endl;
    //usuwanie 3-ego elementu
    VectoredList::VectoredListIterator it3(v2,3);
    v2.erase(it3);
    cout <<"Size after erasing: " <<v2.get_size() << endl;
    for (int i = 0; i < v2.get_size(); ++i)
    {
        cout << v2[i] << " ";
        if (i % 10 == 9)
            cout << endl;
    }
    cout << endl << "[ TEST 3 erase(it1,it2) ]" << endl;
    cout <<"Size before erasing: " <<v2.get_size() << endl;
    VectoredList::VectoredListIterator it4(v2,3);
    VectoredList::VectoredListIterator it5(v2,13);
    v2.erase(it4,it5);
    cout <<"Size after erasing: " <<v2.get_size() << endl;
    for (int i = 0; i < v2.get_size(); ++i)
    {
        cout << v2[i] << " ";
        if (i % 10 == 0)
            cout << endl;
    }
    cout << endl << "[ TEST 5 erase(it1,it2) ]" << endl;
    VectoredList v3;
    for (int i = 0; i < 103; ++i)
        v3.push_back(to_string(i));
    for (int i = 0; i < v3.get_size(); ++i)
    {
        cout << v3[i] << " ";
        if (i % 10 == 9)
            cout << endl;
    }
    cout << endl;
    VectoredList::VectoredListIterator it6(v3,87);
    VectoredList::VectoredListIterator it7(v3,100);
    v3.erase(it6,it7);
    cout<< "AFTER: "<< endl;
    for (int i = 0; i < v3.get_size(); ++i)
    {
        cout << v3[i] << " ";
        if (i % 10 == 9)
            cout << endl;
    } */
    return 0;
}