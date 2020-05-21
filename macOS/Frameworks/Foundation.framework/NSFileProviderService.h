//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group;

@interface NSFileProviderService : NSObject
{
    NSString *_name;
    id _endpointCreatingProxy;
    NSObject<OS_dispatch_group> *_requestFinishedGroup;
}

@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)fetchFileProviderConnectionAndReturnError:(id *)arg1;
- (void)getFileProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3;
- (void)dealloc;

@end

