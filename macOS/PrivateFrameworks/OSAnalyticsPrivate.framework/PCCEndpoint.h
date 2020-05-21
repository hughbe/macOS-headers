//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OSASyncProxyHandler;

@interface PCCEndpoint : NSObject
{
    id <OSASyncProxyHandler> _delegate;
    unsigned int _fileTimeout;
    NSArray *_deviceIds;
}

- (void).cxx_destruct;
@property(readonly) NSArray *deviceIds; // @synthesize deviceIds=_deviceIds;
@property unsigned int fileTimeout; // @synthesize fileTimeout=_fileTimeout;
- (id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (id)send:(id)arg1 message:(id)arg2 error:(id *)arg3;
- (id)synchronize:(id)arg1 withOptions:(id)arg2;
- (BOOL)isDeviceNearby:(id)arg1;
- (void)runWithDelegate:(id)arg1;

@end

