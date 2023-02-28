#include "setArr.h"




setArr::setArr(){
    size=100;
    table=new bool[size];
    
    /* Ustawienie wszystkich komorek na False*/
    for(int i=0; i < size; i++){
        table[i]=false; 
    }
}

int setArr::getSize(){
    return size;
}

void setArr::printSet(){
    int array_size = setArr::getSize();
    for(int i=0; i < size; i++){
        if (table[i] == true){
            std::cout<<i<<" ";
        }
    }
}

void setArr::insert(int x){
    bool is_x_exists = setArr::isInSet(x);
    bool correctNumber = setArr::checkRangeCorrectness(x);
    if (correctNumber==true){
        if (is_x_exists == false){
            table[x]=true;
        }else{
            std::cout<<"\nLiczba "<<x<<" Juz istnieje w zbiorze"<<std::endl;
        }
    }else{
        std::cout<<"\nPodana liczba jest spoza przedzialu 0-100"<<x<<std::endl;
    }  
}

void setArr::withdraw(int i){
    bool correctNumber = setArr::checkRangeCorrectness(i);
    bool is_i_exists = setArr::isInSet(i);
    if (correctNumber == false){
        std::cout<<"\nPodano zly numer przyjmuje numery od -99 do +99"<<std::endl;
    }
    if (is_i_exists == true){
        table[i]=false;
    }
    else{
        std::cout<<"\nPodana liczba nie istnieje "<<std::endl;
    }

}
bool setArr::isInSet(int i){
    if (table[i] == true){
        return true;
    }else{
        return false;
    }
}
bool setArr::checkRangeCorrectness(int x){
    if ((x < 100) && (x > 0)){
        return true;
    }else{
        return false;
    }
}

/* Operator Dodawania*/
setArr setArr::operator+(setArr& object){
    for(int i=0; i < 100; i ++){
        if((object.table[i] == true)){
            object.table[i]==true;
        }
        if(setArr::isInSet(i)==true){
            object.table[i]=true;        
        }
    }
    return object;

    }




int main(){
    /* SetArray Object*/
    setArr set_array;
    setArr set_array1;

    set_array.insert(9);
    set_array.insert(8);
    set_array.insert(10);

    set_array.insert(19);

    set_array.withdraw(19);
    set_array.printSet();   

    set_array1.insert(9);
    set_array1.insert(10);

    std::cout<<" "<<std::endl;
    setArr set_array3 = set_array+set_array1;
    set_array3.printSet();
   
    return 0;


}


