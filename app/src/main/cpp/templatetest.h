//
// Created by Administrator on 2018/4/29.
//

#ifndef CPPTEMPLATE0429_TEMPLATETEST_H
#define CPPTEMPLATE0429_TEMPLATETEST_H

const int size = 10;

template <class T>
class CTemplatetest {
public:
    CTemplatetest();
    ~CTemplatetest();

    bool push(const T x);
    bool pop(T &x);

private:
    T *a;
    int cur;
};



#endif //CPPTEMPLATE0429_TEMPLATETEST_H
