//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask
{
}

- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (BOOL)validate:(id *)arg1;
- (void)dealloc;
- (id)httpMethod;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVCopyTaskDelegate> delegate; // @dynamic delegate;

@end

