#include <iostream>
using namespace std;

const int SIZE=10;

int table[SIZE];

int hashFunction(int key){
    return key%SIZE;
}

void insert(int key){

    int index=hashFunction(key);

    table[index]=key;
}

void display(){

    for(int i=0;i<SIZE;i++){

        cout<<i<<" -> "<<table[i]<<endl;
    }
}

int main(){

    for(int i=0;i<SIZE;i++)
        table[i]=-1;

    insert(15);
    insert(25);
    insert(35);

    display();
}
