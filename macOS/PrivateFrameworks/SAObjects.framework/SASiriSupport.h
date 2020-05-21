//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SASiriSupport : AceObject <SAAceSerializable>
{
}

+ (id)siriSupportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriSupport;
@property(copy, nonatomic) NSArray *useCases;
@property(copy, nonatomic) NSArray *endpoints;
@property(copy, nonatomic) NSString *authToken;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

