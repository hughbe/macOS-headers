//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PodcastServices/PODContentEntityProtocol-Protocol.h>
#import <PodcastServices/PODSecureCoding-Protocol.h>

@class NSString;

@interface PODContentEntity : NSObject <PODContentEntityProtocol, PODSecureCoding>
{
    long long _syncID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long syncID; // @synthesize syncID=_syncID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initUsingPropertiesFrom:(id)arg1;
- (id)initWithSyncID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

