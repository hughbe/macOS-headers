//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCPersistedState.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface BRCFSEventsPersistedState : BRCPersistedState <NSCopying>
{
    NSUUID *_streamUUID;
    unsigned long long _latestEventID;
    unsigned long long _rootID;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rootID; // @synthesize rootID=_rootID;
@property(nonatomic) unsigned long long latestEventID; // @synthesize latestEventID=_latestEventID;
@property(retain, nonatomic) NSUUID *streamUUID; // @synthesize streamUUID=_streamUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatestEventID:(unsigned long long)arg1 streamUUID:(id)arg2 rootID:(unsigned long long)arg3;

@end

