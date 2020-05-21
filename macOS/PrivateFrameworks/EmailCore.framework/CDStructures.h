//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sasl_callback {
    unsigned long long _field1;
    void *_field2;
    void *_field3;
};

struct sasl_interact {
    unsigned long long _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    void *_field5;
    unsigned int _field6;
};

struct sasl_secret {
    unsigned long long _field1;
    unsigned char _field2[1];
};

#pragma mark Named Unions

union ECMessageFlagsHashedBitField {
    unsigned long long hashValue;
    struct {
        unsigned int read:1;
        unsigned int deleted:1;
        unsigned int replied:1;
        unsigned int flagged:1;
        unsigned int draft:1;
        unsigned int forwarded:1;
        unsigned int redirected:1;
        unsigned int junkLevelSetByUser:1;
        unsigned int junkLevel:2;
        unsigned int flagColor:3;
    } bitField;
};

