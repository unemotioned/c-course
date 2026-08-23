#include <stdio.h>

void birthday(int *age);

int main() {

    // pointer = A variable that stores the memory address of another variable.
    //           Benefit: They help avoid wasting memory by allowing you to pass
    //           the address of a large data structure instead of copying the
    //           entire data.

    int age = 25;
    // * could be suffix of type
    // or could be prefix of var name
    int *p_age = &age;

    // print memory address of variable
    printf("%p\n", &age);
    printf("%p\n", p_age); // results are same

    // pass by value = copies the value to function
    // birthday(age);

    // pass by reference
    birthday(p_age);

    printf("You are %d years old\n", age);

    return 0;
}

// how to pass pointer to function
void birthday(int *age) {
    // p_age++; // this will change the copy of a variable

    // *age++; // this will increment the memory address
    // dereference = return a value of given address
    (*age)++;
}
