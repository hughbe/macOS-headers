//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GPBMessage, NSData, NSOutputStream, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct GPBCodedInputStreamState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
    int lastTag;
    unsigned long long recursionDepth;
};

struct GPBExtensionDescription {
    CDUnion_319e3a73 _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    CDUnknownFunctionPointerType _field5;
    int _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct GPBExtensionRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct GPBMessageFieldDescription {
    char *_field1;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
    } _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
};

struct GPBMessage_Storage {
    unsigned int _field1[0];
};

struct GPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct ccdigest_info;

struct ccvrf {
    unsigned long long publickey_nbytes;
    unsigned long long secretkey_nbytes;
    unsigned long long proof_nbytes;
    unsigned long long hash_nbytes;
    unsigned long long group_nbytes;
    struct ccdigest_info *di;
    void *custom;
    CDUnknownFunctionPointerType derive_public_key;
    CDUnknownFunctionPointerType prove;
    CDUnknownFunctionPointerType verify;
    CDUnknownFunctionPointerType proof_to_hash;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

#pragma mark Typedef'd Unions

typedef union {
    char valueBool;
    int valueInt32;
    long long valueInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    float valueFloat;
    double valueDouble;
    NSData *valueData;
    NSString *valueString;
    GPBMessage *valueMessage;
    int valueEnum;
} CDUnion_319e3a73;

