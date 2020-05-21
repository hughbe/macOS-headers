//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString, SGIdentityKey;

@interface SGUnrecognizedContactKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToUnrecognizedContactKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)serialize;
- (id)init;
- (id)initWithSerialized:(id)arg1;
- (id)initWithIdentityKey:(id)arg1;
- (id)initWithNormalizedPhone:(id)arg1;
- (id)initWithNormalizedEmail:(id)arg1;
- (id)initWithEmail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

