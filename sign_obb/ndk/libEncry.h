#pragma once
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

	// ����ͨ���ַ����ṩ��com_package_demo
	// java��NsEncry���е�CheckSign����
	JNIEXPORT void JNICALL Java_com_package_demo_NsEncry_CheckSign(JNIEnv*);

#ifdef __cplusplus
}
#endif