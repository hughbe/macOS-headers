//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGGNGOverlayBlendOperation : DGOperation
{
    NSNumber *_inputIntensity;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_filter;

@end

