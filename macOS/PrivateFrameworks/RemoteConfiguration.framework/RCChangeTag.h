//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/NSSecureCoding-Protocol.h>
#import <RemoteConfiguration/RCSerializable-Protocol.h>

@class NSString;

@interface RCChangeTag : NSObject <RCSerializable, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_contentHash;
    NSString *_lastModifiedString;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *lastModifiedString; // @synthesize lastModifiedString=_lastModifiedString;
@property(readonly, copy, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentHash:(id)arg2 lastModifiedString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

