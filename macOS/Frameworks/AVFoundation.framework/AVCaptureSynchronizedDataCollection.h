//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSFastEnumeration-Protocol.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration>
{
    AVCaptureSynchronizedDataCollectionInternal *_internal;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly) unsigned long long count;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)synchronizedDataForCaptureOutput:(id)arg1;

@end

