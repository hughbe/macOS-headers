//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PipelineKit/PIURLSessionOperationSubclass.h>

#import <PipelineKit/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

@interface PIURLDataOperation : PIURLSessionOperationSubclass <NSURLSessionTaskDelegate>
{
}

+ (id)operationWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)execute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

