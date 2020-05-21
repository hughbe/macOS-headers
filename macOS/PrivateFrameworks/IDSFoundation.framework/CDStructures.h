//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct IDSGLAttrBinaryData_ {
    int len;
    unsigned char data[1024];
};

struct IDSGlobalLinkAttribute {
    unsigned short type;
    unsigned short len;
    union {
        struct sockaddr_storage ss;
        unsigned short u16;
        unsigned int u32;
        unsigned long long u64;
        struct IDSGLAttrBinaryData_ binaryData;
    } value;
};

struct IDSNetBuffer_;

struct IDSSimpleUInt16List {
    unsigned long long listSize;
    unsigned long long itemCount;
    unsigned short *items;
};

struct IDSStunAttribute {
    unsigned short type;
    unsigned short len;
    unsigned short valueType;
    char encrypted;
    union {
        struct sockaddr_storage ss;
        unsigned char u8;
        unsigned short u16;
        unsigned int u32;
        unsigned long long u64;
        struct StunBinaryData binaryData;
        struct StunErrorCode errorCode;
        struct StunUnknownAttribute unknownAttribute;
    } value;
};

struct IDSTCPConnection_ {
    int _field1;
    char _field2;
    unsigned int _field3;
    int _field4;
    struct IDSNetBuffer_ *_field5;
    struct sockaddr_storage _field6;
    struct sockaddr_storage _field7;
    CDStruct_183601bc *_field8;
    CDStruct_183601bc *_field9;
    struct IDSTCPLinkCounter_ *_field10;
    int _field11;
    struct IDSTCPConnection_ *_field12;
    id _field13;
    CDUnknownBlockType _field14;
};

struct IDSTCPLinkCounter_ {
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
};

struct StunBinaryData {
    int len;
    unsigned char data[1472];
};

struct StunErrorCode {
    int errorClass;
    int errorNumber;
    unsigned char errorReason[128];
    int len;
};

struct StunUnknownAttribute {
    int count;
    unsigned short unknowAttributes[20];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct ifaddrs {
    struct ifaddrs *_field1;
    char *_field2;
    unsigned int _field3;
    struct sockaddr *_field4;
    struct sockaddr *_field5;
    struct sockaddr *_field6;
    void *_field7;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

#pragma mark Typedef'd Structures

typedef struct {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    _Bool _field5;
} CDStruct_457e09f6;

typedef struct {
    int length;
    unsigned char data[12];
} CDStruct_330c469e;

typedef struct CDStruct_183601bc;

typedef struct {
    char *_field1;
    unsigned long long _field2;
    long long _field3;
    long long _field4;
    unsigned int _field5;
    char _field6;
    char _field7;
    char _field8;
    char _field9;
    char _field10;
    char _field11;
    unsigned int _field12;
    struct sockaddr_storage _field13;
    struct sockaddr_storage _field14;
    unsigned short _field15;
    int _field16;
    struct {
        char *_field1;
        unsigned short _field2;
        int _field3;
        unsigned short _field4[12];
        long long _field5;
        unsigned char _field6;
        unsigned short _field7;
        unsigned char _field8;
        char _field9;
        char _field10;
        unsigned short _field11;
        struct {
            unsigned short _field1;
            unsigned short _field2;
            unsigned short _field3;
            unsigned short _field4;
            unsigned short _field5;
        } _field12;
        char _field13;
        unsigned int _field14;
    } _field17[8];
    char _field18;
    char _field19;
    int _field20;
    double _field21;
    unsigned long long _field22;
    unsigned char _field23[0];
} CDStruct_4c86a2e2;

