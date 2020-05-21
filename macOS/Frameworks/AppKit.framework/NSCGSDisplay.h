//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface NSCGSDisplay : NSObject
{
    int _displayID;
    struct CGRect _frame;
    unsigned int _depth;
    double _backingPixelsPerPoint;
    struct CGSize _devicePixelCounts;
    NSUUID *_UUID;
    struct CGColorSpace *_colorSpace;
    double _maxHDRValue;
    double _maxPotentialHDRValue;
    double _maxReferenceHDRValue;
}

+ (BOOL)displaysWillChange;
+ (BOOL)updateSeeds;
+ (id)uniqueDisplays;
+ (unsigned int)changeSeed;
+ (double)flipOffset;
+ (void)addColorSpaceChangedHandler:(CDUnknownBlockType)arg1;
+ (void)addMaximumHDRValueChangedHandler:(CDUnknownBlockType)arg1;
+ (void)addAcceleratorChangedHandler:(CDUnknownBlockType)arg1;
+ (void)addDisplayChangedHandler:(CDUnknownBlockType)arg1;
@property(readonly) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) double maxReferenceHDRValue; // @synthesize maxReferenceHDRValue=_maxReferenceHDRValue;
@property(readonly) double maxPotentialHDRValue; // @synthesize maxPotentialHDRValue=_maxPotentialHDRValue;
@property(readonly) double maxHDRValue; // @synthesize maxHDRValue=_maxHDRValue;
@property(readonly) struct CGSize devicePixelCounts; // @synthesize devicePixelCounts=_devicePixelCounts;
@property(readonly) double backingPixelsPerPoint; // @synthesize backingPixelsPerPoint=_backingPixelsPerPoint;
@property(readonly) unsigned int depth; // @synthesize depth=_depth;
@property(readonly) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly) int displayID; // @synthesize displayID=_displayID;
- (id)description;
- (void)dealloc;
- (id)initWithDisplayID:(int)arg1 flipOffset:(double)arg2;

@end

