//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MiroMetadata : NSObject
{
    NSArray *_allRanges;
    NSArray *_loudnessRanges;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSArray *loudnessRanges; // @synthesize loudnessRanges=_loudnessRanges;
@property(retain) NSArray *allRanges; // @synthesize allRanges=_allRanges;
- (void)removeRangesOfType:(unsigned long long)arg1;
- (void)addRanges:(id)arg1;
- (void)setRanges:(id)arg1;
- (void)getMetadata;

@end

