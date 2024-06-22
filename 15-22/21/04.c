/*
(b) An animal could be a canine (dog, wolf, fox, etc.), a feline (cat, lynx,
jaguar, etc.), a cetacean (whale, narwhal, etc.) or a marsupial (koala,
wombat, etc.). The information whether a particular animal is
canine, feline, cetacean, or marsupial is stored in bit number 0, 1, 2
and 3, respectively of an integer variable type. Bit number 4 of the
variable type stores the information about whether the animal is
Carnivore or Herbivore.
For the following animal, complete the program to determine
whether the animal is an herbivore or a carnivore. Also determine
whether the animal is a canine, feline, cetacean or a marsupial.
struct animal
{
 char name[ 30 ] ; int type ;
}
struct animal a = { "OCELOT", 18 } ;

*/

#include <stdio.h>
#include <string.h>

struct animal
{
    char name[30];
    int type;
};

void aboutAnimal(struct animal a){
    int bit=1<<4;
    char diet[30];
    if((a.type&bit)!=0){
        strcpy(diet,"carnivore");
    }else{
        strcpy(diet,"herbivore");
    }
    char arr[][30]={"canine","feline","cetacean","marsupial"};
    bit=1;
    for(int i=0; i<4; i++){
        if((a.type&bit)!=0){
            printf("%s is a %s %s.",a.name,diet,arr[i]);
        }
        bit=bit<<1;
    }
}

int main()
{
    struct animal a = {"OCELOT", 18};
    aboutAnimal(a);
    return 0;
}