//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MCTeslaConfiguration : NSObject
{
    BOOL _fetching;
    CDUnknownBlockType _callback;
    NSXPCConnection *_connection;
}

@property(nonatomic, getter=isFetching) BOOL fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchDidFailWithError:(id)arg1;
- (id)connectionError;
- (void)dealloc;
- (id)init;

@end

