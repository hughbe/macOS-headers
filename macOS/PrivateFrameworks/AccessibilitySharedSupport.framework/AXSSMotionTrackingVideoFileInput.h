//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSString;

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput
{
    NSString *__name;
}

+ (BOOL)supportsSecureCoding;
+ (id)videoFileInputWithName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *_name; // @synthesize _name=__name;
- (id)initWithPlistDictionary:(id)arg1;
- (id)plistDictionary;
- (BOOL)supportsExpressions;
- (id)description;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isVideoFile;
- (unsigned long long)trackingType;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1;

@end

