//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPInvalidationFutureToken-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class MPInvalidationFuture, NSString;

@interface _MPFutureInvalidationToken : NSObject <NSCopying, MPInvalidationFutureToken>
{
    MPInvalidationFuture *_future;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPInvalidationFuture *future; // @synthesize future=_future;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

