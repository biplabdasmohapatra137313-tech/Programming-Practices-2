//Write a program to demonstrate nested structure.

#include <stdio.h>

struct Address
{
    char city[50];
    char street[50];
};

struct Person
{
    char name[50];
    int age;
    struct Address address;
};

int main()
{
    struct Person person1 = {"Alice", 25, {"New York", "123 Main St"}};

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s\n", person1.address.street, person1.address.city);

    return 0;
}

