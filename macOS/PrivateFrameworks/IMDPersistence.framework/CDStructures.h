//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CSDBLookAsideBufferConfig {
    int _field1;
    int _field2;
    unsigned int :1;
};

struct CSDBSqliteConnection {
    struct CSDBSqliteDatabase *_field1;
    struct sqlite3 *_field2;
    struct __CFDictionary *_field3;
    void *_field4;
    CDUnknownFunctionPointerType _field5;
    unsigned int _field6;
};

struct CSDBSqliteDatabase {
    struct __CFString *_field1;
    struct CSDBSqliteConnection *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    _Bool _field9;
    void *_field10;
    int _field11;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field12;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field13;
    int _field14;
    CDUnknownFunctionPointerType _field15;
    void *_field16;
    struct __CFString *_field17;
    unsigned int _field18;
    struct CSDBLookAsideBufferConfig _field19;
};

struct IMDSqlOperation {
    void *_field1;
    void *_field2;
    struct __CFString *_field3;
    void *_field4;
    struct IMDSqlStatement _field5;
    struct __CFError *_field6;
};

struct IMDSqlStatement {
    void *_field1;
    int _field2;
    struct __CFString *_field3;
    struct sqlite3 *_field4;
    int _field5;
    int _field6;
    int _field7;
    struct IMPerfMeasurement_t _field8;
};

struct IMFileLocation_t {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    int _field5;
};

struct IMPerfMeasurement_t {
    struct IMFileLocation_t _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct __CFString *_field4;
    double _field5;
    double _field6;
    double _field7;
};

struct _IMDHandleRecordStruct;

struct _IMDMessageRecordStruct {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    long long _field2;
    struct __CFArray *_field3;
    struct _IMDHandleRecordStruct *_field4;
    struct _IMDHandleRecordStruct *_field5;
    struct __CFArray *_field6;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFArray;

struct __CFString;

struct sqlite3;

