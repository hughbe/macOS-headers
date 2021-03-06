//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGImage;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DFRTouchBarHandle {
    unsigned int rawValue;
};

struct ImageData {
    struct CGImage *image;
    struct __CFString *name;
    struct CGSize size;
    unsigned int template:1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

