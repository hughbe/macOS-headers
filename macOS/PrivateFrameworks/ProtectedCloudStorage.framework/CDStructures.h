//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct PCSAttributes {
    unsigned int _field1;
    struct PCSTypeValue *_field2;
};

struct PCSTypeValue;

struct _OpaquePCSShareProtection {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct _PCSIdentitySetData *_field2;
    struct _PCSIdentitySetData *_field3;
    struct _PCSIdentitySetData *_field4;
    struct __CFDictionary *_field5;
    struct __CFArray *_field6;
    struct __CFData *_field7;
    struct __CFData *_field8;
    struct __CFData *_field9;
    struct _PCSKeyData *_field10;
    struct __CFData *_field11;
    struct _PCSKeyData *_field12;
    struct __CFDictionary *_field13;
    unsigned int _field14;
    unsigned int _field15;
    struct PCSAttributes _field16;
    struct _PCSPublicIdentityData *_field17;
    struct _PCSPublicIdentityData *_field18;
    struct _PCSPublicIdentityData *_field19;
    struct _PCSPublicIdentityData *_field20;
    struct _PCSIdentityData *_field21;
    struct _PCSIdentityData *_field22;
    int _field23;
    struct {
        _Bool _field1;
        _Bool _field2;
        _Bool _field3;
        _Bool _field4;
        _Bool _field5;
        _Bool _field6;
        _Bool _field7;
    } _field24;
    unsigned int _field25;
};

struct _PCSIdentityData;

struct _PCSIdentitySetData;

struct _PCSKeyData;

struct _PCSPublicIdentityData;

struct __CFData;

struct __CFDictionary;

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

