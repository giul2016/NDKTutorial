# Make-File for the convolution code
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := signal
LOCAL_SRC_FILES := com_example_ndktutorial_VectorNat.cpp Signal.cpp
LOCAL_CPP_FEATURES := exceptions
LOCAL_CPP_FLAGS := -std=c++11

include $(BUILD_SHARED_LIBRARY)
