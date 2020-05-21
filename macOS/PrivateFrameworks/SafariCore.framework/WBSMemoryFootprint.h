//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/NSSecureCoding-Protocol.h>

@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject <NSSecureCoding>
{
    struct task_vm_info _vmInfo;
    NSArray *_zones;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *zones; // @synthesize zones=_zones;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) WBSMemoryFootprintMallocZone *defaultMallocZone;
@property(readonly, nonatomic) unsigned long long dirtySize;
@property(readonly, nonatomic) unsigned long long residentSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id *)arg1;
- (id)init;

@end

