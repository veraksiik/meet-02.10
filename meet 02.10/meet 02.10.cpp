#include <Windows.h>
#include <iostream>
//конструкторы копирования и переноса
//операоры присваивания копированием и переносом

class Sample {

public:
    Sample() {
        std::cout << this << "Рандомный текст\n";
    }

    Sample(int val) {
        std::cout << this << "Рандомный текст 2.0 с интом\n";
    }

    Sample(const Sample& other) {
        std::cout << this << "Копия конструктора\n";
    }

    Sample(Sample&& other) {
        std::cout << this << "чё то конструктора\n";
    }

    ~Sample() {//может быть онли один без параметров
        std::cout << this << "деструктор\n";
    }




};

void F00(Sample obj) {
    Sample obj1;
    Sample obj2(2);
}

Sample F01() {
    Sample result;
    return std::move(result);
}

int main()
{

    Sample obj1;
    Sample obj2(2);
    auto pObj1 = new Sample;
    F00(*pObj1);
    Sample obj3 = F01();
    delete pObj1;
    return 0;

}
