//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*> *__next_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *>>> {
    struct __hash_table<std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::hash<const char *>, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::equal_to<const char *>, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, os_log_s *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, os_log_s *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::hash<const char *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, os_log_s *>, std::__1::equal_to<const char *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;

// Ambiguous groups
typedef struct {
    unsigned int timestamp:1;
    unsigned int domain:1;
    unsigned int error:1;
} CDStruct_6e486683;

