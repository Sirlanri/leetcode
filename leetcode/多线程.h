#pragma once
#include <mutex>
#include <iostream>
using namespace std;

class Foo {
public:
    std::mutex mute1, mute2;

    Foo() {
        mute1.lock();
        mute2.lock();
    }

    void first() {

        // printFirst() outputs "first". Do not change or remove this line.
        cout<<"first";
        mute1.unlock();
    }

    void second() {
        mute1.lock();
        // printSecond() outputs "second". Do not change or remove this line.
        cout<<"second";
        mute1.unlock();
        mute2.unlock();
    }

    void third() {
        mute1.lock();
        mute2.lock();
        // printThird() outputs "third". Do not change or remove this line.
        cout<<"third";
        mute1.unlock();
        mute2.unlock();
    }
};
