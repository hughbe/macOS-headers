//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UMLog : NSObject
{
    unsigned long long _type;
}

+ (id)fault;
+ (id)error;
+ (id)debug;
+ (id)info;
+ (id)standard;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)logMessage:(id)arg1;
- (void)logPrivateFormat:(id)arg1;
- (void)logPublicFormat:(id)arg1;

@end

