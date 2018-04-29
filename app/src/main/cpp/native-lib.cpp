#include <jni.h>
#include <string>
#include <android/log.h>

#include "templatetest.cpp"

#define TAG "android_jni" // 这个是自定义的LOG的标识
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型

extern "C"
JNIEXPORT jstring
JNICALL
Java_com_example_administrator_cpptemplate0429_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint
JNICALL
Java_com_example_administrator_cpptemplate0429_MainActivity_start(
        JNIEnv *env,
        jobject /* this */) {

    std::string hello = "Hello from C++";
    CTemplatetest<char> tt;
    char a = 'a';
    while (tt.push(a)){
        a++;
    }

    while (tt.pop(a)){
        printf("%c", a);
    }

    LOGI("JNI logout: %s", "hello");
    return 9;
}