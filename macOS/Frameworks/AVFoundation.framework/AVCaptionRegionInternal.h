//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptionPosition;

__attribute__((visibility("hidden")))
@interface AVCaptionRegionInternal : NSObject
{
    struct OpaqueFigCaptionRegion *figCaptionRegion;
    AVCaptionPosition *position;
    AVCaptionPosition *endPosition;
    BOOL _overridePositionShouldBeNil;
}

@end

