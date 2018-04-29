//
// Created by Administrator on 2018/4/29.
//

#include "templatetest.h"


template <class T>
CTemplatetest<T>::CTemplatetest() {
    a = new T(size);
    cur = 0;
}

template <class T>
CTemplatetest<T>::~CTemplatetest() {
    delete []a;
}

template <class T>
bool CTemplatetest<T>::pop(T &x) {
    if(cur >= 0){
        x = a[cur];
        cur--;
        return true;
    } else{
        return false;
    }
}

template <class T>
bool CTemplatetest<T>::push(const T x) {
    if (cur < size - 1){
        a[cur] = x;
        cur++;
        return true;
    } else{
        return false;
    }
}