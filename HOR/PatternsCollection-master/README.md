# PatternsCollection
![CI](https://github.com/akhtyamovpavel/PatternsCollection/workflows/CI/badge.svg)
Кодовая база примеров паттернов проектирования по курсу "Технологии программирования, МФТИ"

## Содержание

* Порождающие паттерны:
  * [Factory Method](/FactoryMethod)
    * [C++](/FactoryMethod/cpp-source)
    * [Python](/FactoryMethod/python-source)
  * [Abstract Factory](/AbstractFactory)
    * [C++](/AbstractFactory/cpp-source)
    * [Python](/AbstractFactory/python-source)
  * [Builder](/Builder)
    * [C++](/Builder/cpp-source)
    * [Python](/Builder/python-source)
  * [Prototype](/Prototype)
    * [C++](/Prototype/cpp-source)
    * [Python](/Prototype/python-source)
* Структурные паттерны:
  * [Adapter](/Adapter)
    * [C++](/Adapter/cpp-source)
    * [Python](/Adapter/python-source)
  * [Bridge](/Bridge/cpp-source)
  * [Decorator](/Decorator/cpp-source)
  * [Composite](/Composite/cpp-source)
* Поведенческие паттерны:
  * [Observer](/Observer/cpp-source)
  * [Strategy](/Strategy/cpp-source)
  * [Chain of Responsibility](/ChainResponsibility/cpp-source)
  * [Command](/Command/cpp-source)
  * [Mediator](/Mediator/cpp-source)
  * [State](/State/cpp-source)
  * [Memento](/Memento/cpp-source)
  * [Visitor](/Visitor/cpp-source)

## Инструкция по установке зависимостей и сборке проекта  

0) Для сборки необходим компилятор С++  
Например, gcc:  
MacOS:  
```
brew update && brew upgrade
brew install gcc
```
Ubuntu:  
```
sudo apt update
sudo apt install build-essential
sudo apt-get install manpages-dev
```

Проверка на то, что установка прошла успешно  
```
gcc --version
```
Если все ок, то будет выведена информация о версии компилятора и дополнительная информация  
1) Скачиваем подмодули
```
git submodule update --init --recursive
```

2) Устанавливаем boost  
Полное руководство по установке boost можно найти [здесь](https://www.boost.org/users/download/)
```
cd boost  
./bootstrap.sh --prefix=/usr/local/Cellar/boost  
./b2  
cd ..  
```

3) Устанавливаем openssl  
Полное руководство по установке openssl можно найти [здесь](https://github.com/openssl/openssl/blob/52c6c12c1cad6f1046b34f4139d1aa3e967a5530/INSTALL.md)  
```
cd openssl  
./Configure --prefix=/usr/local/Cellar/openssl  
make  
make install  
cd ..  
```

4) Устанавливаем сurl  
Полное руководство по установке сurl можно найти [здесь](https://curl.se/docs/install.html )   
```
cd curl
./buildconf  
./configure  
make  
cd ..  
```
5) Собираем сам проект  
```
mkdir build  
cd build  
cmake ..
make
cd ..  
```
