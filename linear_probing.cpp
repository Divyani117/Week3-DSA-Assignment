#include <iostream>
using namespace std;

const int SIZE=10;

int hashTable[SIZE];

int hashFunction(int key){
    return key%SIZE;
}

void insert(int key){

    int index=hashFunction(key);

    while(hashTable[index]!=-1){

        index=(index+1)%SIZE;
    }

    hashTable[index]=key;
}

void display(){

    for(int i=0;i<SIZE;i++){

        cout<<i<<" -> "<<hashTable[i]<<endl;
    }
}

int main(){

    for(int i=0;i<SIZE;i++)
        hashTable[i]=-1;

    insert(15);
    insert(25);
    insert(35);
    insert(45);

    display();
}
