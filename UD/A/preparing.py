#! /usr/bin/env python3

algo = '''namespace BuildSys{
    int sum(int a, int b){
        return a + b;
    }
};

'''

with open("index.h", "w") as file:
    file.write(algo)

