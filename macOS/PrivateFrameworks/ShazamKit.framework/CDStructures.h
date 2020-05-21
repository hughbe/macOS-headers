//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct MMap;

struct MREInstance {
    struct unique_ptr<shazam::MMap, std::__1::default_delete<shazam::MMap>> _field1;
    struct unique_ptr<Searcher, std::__1::default_delete<Searcher>> _field2;
};

struct Searcher;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct error_category;

struct error_code {
    int _field1;
    struct error_category *_field2;
};

struct exception {
    CDUnknownFunctionPointerType *_field1;
};

struct system_error {
    CDUnknownFunctionPointerType *_field1;
    struct __libcpp_refstring {
        char *_field1;
    } _field2;
    struct error_code _field3;
};

struct unique_ptr<Searcher, std::__1::default_delete<Searcher>> {
    struct __compressed_pair<Searcher *, std::__1::default_delete<Searcher>> {
        struct Searcher *_field1;
    } _field1;
};

struct unique_ptr<shazam::MMap, std::__1::default_delete<shazam::MMap>> {
    struct __compressed_pair<shazam::MMap *, std::__1::default_delete<shazam::MMap>> {
        struct MMap *_field1;
    } _field1;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_a1f69cfb;

