//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVLoggingIdentifier-Protocol.h>

@class AVAssetLoggingIdentifierInternal, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier>
{
    AVAssetLoggingIdentifierInternal *_priv;
}

- (id)makeDerivedIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *name;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

