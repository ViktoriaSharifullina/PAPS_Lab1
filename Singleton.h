#pragma once

class Singleton
{
private:
    Singleton() {}
    Singleton(const Singleton&) {}
    Singleton& operator =(Singleton&) {}
    int counter = 0;
public:
    static Singleton* getInstance() {
        static Singleton* instance;
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }
    void addCount() {
        counter++;
    }
    int getCount() {
        return counter;
    }
};
