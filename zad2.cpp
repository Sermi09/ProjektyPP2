#include <iostream>


void doubleCopy(int *start, int *end,int *copy_start,int *copy_end){

    while(start!=end){
        *copy_start = (*start)*2;
        start+=1;
        copy_start+=1;
    }
    *copy_end = (*end)*2;
}

int main() {
    int size;
    std::cout<<"Podaj rozmiar tablicy: "<<std::endl;
    std::cin>>size;
    int *tab = new int [size];
    int *start = tab;
    for(int i=0;i<size;++i){
        std::cin>>tab[i];
    }
    int *end = start+(sizeof(int)*size);
    int *copy = new int [size];
    int *copy_start = copy;
    int *copy_end = copy_start+(sizeof(int)*size);




    doubleCopy(start,end,copy_start,copy_end);
    for(int i=0;i<size;++i){
        std::cout<<copy[i]<<" ";
    }

    return 0;
}
