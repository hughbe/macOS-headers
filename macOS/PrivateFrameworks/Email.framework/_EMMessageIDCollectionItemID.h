//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMessageCollectionItemID.h>

#import <Email/EFCacheable-Protocol.h>

@class ECAngleBracketIDHash, NSString;

@interface _EMMessageIDCollectionItemID : EMMessageCollectionItemID <EFCacheable>
{
    _Atomic long long _messageIDHeaderHashValue;
    ECAngleBracketIDHash *_messageIDHeaderHash;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash; // @synthesize messageIDHeaderHash=_messageIDHeaderHash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMessageIDHeaderHash:(id)arg1;
- (id)cachedSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

