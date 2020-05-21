//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPersistedData : NSObject <NSSecureCoding>
{
    NSString *_version;
    NSMutableArray *_latencies;
    NSMutableArray *_preferredModes;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
+ (id)supportedClasses;
@property(retain, nonatomic) NSMutableArray *preferredModes; // @synthesize preferredModes=_preferredModes;
@property(retain, nonatomic) NSMutableArray *latencies; // @synthesize latencies=_latencies;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;
- (void)update;
- (struct Mode)preferredModeForUUID:(id)arg1;
- (void)setPreferredMode:(struct Mode)arg1 forUUID:(id)arg2;
- (double)latencyForUUID:(id)arg1 andMode:(struct Mode)arg2;
- (void)setLatency:(double)arg1 forUUID:(id)arg2 andMode:(struct Mode)arg3;
- (id)description;
- (void)dealloc;
- (id)init;

@end

