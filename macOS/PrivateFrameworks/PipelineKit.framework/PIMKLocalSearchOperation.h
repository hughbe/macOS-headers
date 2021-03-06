//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface PIMKLocalSearchOperation : PIOperationSubclass
{
    NSObject<OS_dispatch_source> *_timer;
    id _ticket;
}

+ (id)operationWithMUIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)operationWithRegion:(id)arg1 categories:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)operationWithRegion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)operationWithQuery:(id)arg1 inRegion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;

@end

