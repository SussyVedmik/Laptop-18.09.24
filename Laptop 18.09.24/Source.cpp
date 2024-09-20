#include "Laptop.h"
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    CPU cpu("Intel i7", 8, 3800);
    SDD sdd("Samsung", 512, 2500);
    GraphicCard videoCard("NVIDIA GTX 1660", 6, 4200);
    Ram ram("DDR4", 16, 3400);

    Laptop laptop1("Asus ROG", "Silver", 1500, cpu, sdd, ram, videoCard);
    laptop1.Print();
    Laptop laptop2("MacBook Pro", "Space Gray", 2500, cpu, sdd, ram, videoCard);
    laptop2.Print();

    /*cout << "Laptop 1: " << laptop1.GetName() << ", Color: " << laptop1.GetColor()
        << ", Price: $" << laptop1.GetPrice() << endl;

    cout << "Laptop 2: " << laptop2.GetName() << ", Color: " << laptop2.GetColor()
        << ", Price: $" << laptop2.GetPrice() << endl;*/

    cout << "Total Laptops: " << Laptop::GetCount() << endl;

    return 0;
}