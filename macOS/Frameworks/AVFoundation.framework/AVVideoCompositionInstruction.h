//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVVideoCompositionInstruction-Protocol.h>
#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>
#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVVideoCompositionInstructionInternal, NSArray, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction>
{
    AVVideoCompositionInstructionInternal *_instruction;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(readonly, copy) NSString *description;
- (void)_setValuesFromDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setEnablePostProcessing:(BOOL)arg1;
@property(readonly, nonatomic) BOOL enablePostProcessing;
- (void)setLayerInstructions:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *layerInstructions;
- (void)setBackgroundColor:(struct CGColor *)arg1;
@property(readonly, retain, nonatomic) struct CGColor *backgroundColor;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) BOOL containsTweening;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property(readonly, nonatomic) int passthroughTrackID;
- (void)dealloc;
- (id)_deepCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

