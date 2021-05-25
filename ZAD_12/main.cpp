#include <iostream>
#include "VectoredList.h"
using namespace std;

int main() {

    //MOJE

    //TEST 1 (operator +)
    std::cout<<"[TEST 1]: "<<std::endl;
    VectoredList l_1, l_2;
    std::cout<<"l_1: ";
    for(int i=0;i<20;++i){
        l_1.push_back(to_string(i));
    }
    for(int i=6;i<17;++i){
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
    std::cout<<"(l_1+l_2)[2]: "<<(l_1+l_2)[2] << (l_1+l_2)[22] <<std::endl;

    //TEST 2 (konstruktor przenoszący)

    std::cout<<"[TEST 2]"<<std::endl;
    VectoredList&& ref = VectoredList(l_1);
    std::cout<<"ref: ";
    for(int i=0; i<ref.get_size();++i){
        std::cout<<ref[i]<<" ";
    }
    std::cout<<std::endl;

    //TEST 3 (przenoszący +)
    std::cout<<"[TEST 3]: "<<std::endl;
    VectoredList ref_1(ref);
    std::cout<<"ref_1: ";
    for(int i=0; i<ref_1.get_size();++i){
        std::cout<<ref_1[i]<<" ";
    }
    std::cout<<std::endl;

    //TEST 4 (assign)
    std::cout<<"[TEST 4]: "<<std::endl;
    std::vector<string> vector1{"q","w","e","r","t","y"};
    l_2.assign(vector1);
    std::cout<<std::endl<<"l_1";
    for(int i=0; i<l_2.get_size();++i){
        std::cout<<l_2[i]<<" ";
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