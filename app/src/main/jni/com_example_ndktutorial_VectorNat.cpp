#include "com_example_ndktutorial_VectorNat.h"
#include "Signal.h"

JNIEXPORT jdouble JNICALL Java_com_example_ndktutorial_VectorNat_norm
  (JNIEnv * env, jclass obj, jdoubleArray signal1)
  {
    jboolean isCopy1;
    jsize len1 = env->GetArrayLength(signal1);
    jdouble *body1 = env->GetDoubleArrayElements(signal1,&isCopy1);
    jdouble result=Signal::norm(body1,len1);
    if (isCopy1 == JNI_TRUE) {
	env -> ReleaseDoubleArrayElements(signal1, body1, JNI_ABORT);
    }
    return result;
  }
