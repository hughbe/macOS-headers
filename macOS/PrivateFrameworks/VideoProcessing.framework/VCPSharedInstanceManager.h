//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCPSharedInstanceManager : NSObject
{
    NSObject<OS_dispatch_queue> *serialQueue_;
    NSMutableDictionary *sharedInstances_;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)reset;
- (id)sharedInstanceWithIdentifier:(id)arg1 andCreationBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

