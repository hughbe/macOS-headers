//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BurnController;

struct BurnManager;

struct DRBurnObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    struct DRMutex _field8;
    struct DRDeviceObject *_field9;
    struct BurnController *_field10;
    struct BurnManager *_field11;
    struct DRBurnStatus *_field12;
    unsigned int _field13;
    unsigned int _field14;
    void *_field15;
    struct __CFArray *_field16;
    struct __CFDate *_field17;
};

struct DRBurnStatus;

struct DRCallbackDeviceCallbacks {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
};

struct DRDeviceObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
};

struct DREraseStatus;

struct DREraserObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    struct DRMutex _field8;
    struct DROpticalDevice *_field9;
    struct DREraseStatus *_field10;
    struct DRThreadObject *_field11;
    struct __CFString *_field12;
    struct __CFString *_field13;
    struct __CFString *_field14;
    struct __CFString *_field15;
    _Bool _field16;
};

struct DRFSContentObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    unsigned int _field8;
    struct __CFString *_field9;
    struct __CFDictionary *_field10;
    struct __CFDictionary *_field11;
    struct __CFDictionary *_field12;
    struct MinimalFSRef *_field13;
    struct DRFolderObject *_field14;
    unsigned int _field15;
    struct DRFSIDList _field16;
};

struct DRFSIDList {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
};

struct DRFileObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    unsigned int _field8;
    struct __CFString *_field9;
    struct __CFDictionary *_field10;
    struct __CFDictionary *_field11;
    struct __CFDictionary *_field12;
    struct MinimalFSRef *_field13;
    struct DRFolderObject *_field14;
    unsigned int _field15;
    struct DRFSIDList _field16;
    CDUnknownFunctionPointerType _field17;
    void *_field18;
    char *_field19;
    char *_field20;
};

struct DRFolderObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    unsigned int _field8;
    struct __CFString *_field9;
    struct __CFDictionary *_field10;
    struct __CFDictionary *_field11;
    struct __CFDictionary *_field12;
    struct MinimalFSRef *_field13;
    struct DRFolderObject *_field14;
    unsigned int _field15;
    struct DRFSIDList _field16;
    struct __CFArray *_field17;
};

struct DRMutex {
    struct DRMutexObject *_field1;
};

struct DRMutexObject;

struct DROpticalDevice;

struct DRPrepareObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    struct DRMutex _field8;
    struct DROpticalDevice *_field9;
    struct DRPrepareStatus *_field10;
    struct DRThreadObject *_field11;
    struct __CFDictionary *_field12;
    struct __CFDictionary *_field13;
    _Bool _field14;
};

struct DRPrepareStatus;

struct DRRefConCallbacks {
    unsigned long long _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct DRSessionObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    CDUnknownFunctionPointerType _field8;
    struct __CFArray *_field9;
    unsigned short _field10;
    unsigned int _field11;
    unsigned short _field12;
};

struct DRSessionProductionInfo {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    long long _field5;
};

struct DRTaskObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    struct DRMutex _field8;
    int _field9;
    unsigned int _field10;
    struct __CFDictionary *_field11;
    struct __CFSet *_field12;
};

struct DRThreadObject;

struct DRTrackObject {
    CDUnknownFunctionPointerType *_field1;
    struct DRMutex _field2;
    void *_field3;
    struct DRRefConCallbacks _field4;
    struct __CFDictionary *_field5;
    struct __DRType *_field6;
    void *_field7;
    CDUnknownFunctionPointerType _field8;
    void *_field9;
    unsigned int _field10;
    _Bool _field11;
    struct TrackProducer *_field12;
    struct DRSessionObject *_field13;
};

struct DRTrackProductionInfo {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned long long _field6;
};

struct FSRef {
    unsigned char _field1[80];
};

struct MinimalFSRef;

struct TrackProducer;

struct __CFArray;

struct __CFDictionary;

struct __CFString;

struct __DRType;

