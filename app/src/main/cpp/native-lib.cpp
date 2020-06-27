#include <jni.h>
#include <string>
#include <android/log.h>
#define  APPNAME  "JNIStarter"
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_jnistarter_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject jobject1 /* this */) {
    jint multipleMe = 2; //
    std::string myValue = "thao handsome hihi";
    jclass clazz = env->FindClass("com/example/jnistarter/MainActivity");
    jmethodID methodId = env->GetMethodID(clazz, "callFromC", "(I)I");
    int a = env->CallIntMethod(jobject1, methodId, multipleMe);
    int32_t hihi= a;
    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME,"value: %d", hihi);
    return env->NewStringUTF("");
}
