//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct animation_completion_handler_container;

struct vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<CAShapeLayer *__strong *, std::__1::allocator<CAShapeLayer *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
    struct animation_completion_handler_container *__begin_;
    struct animation_completion_handler_container *__end_;
    struct __compressed_pair<LAUI_CA_utilities::animation_completion_handler_container *, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
        struct animation_completion_handler_container *__value_;
    } __end_cap_;
};

