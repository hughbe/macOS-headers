//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _NSCarbonMenuWindowTrackingAreaReference : NSObject
{
    struct CGRect rect;
    void *userData;
    struct OpaqueHIViewTrackingAreaRef *trackingRef;
    long long trackingNum;
    struct {
        unsigned int inside:1;
        unsigned int enabledDuringMouseDrag:1;
        unsigned int isCursorRect:1;
        unsigned int reserved:29;
    } f;
}

@end

