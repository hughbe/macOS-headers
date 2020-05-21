//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>
{
}

+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)photo;
@property(copy, nonatomic) NSURL *thumbnail;
@property(retain, nonatomic) SAUIAppPunchOut *photoPunchOut;
@property(copy, nonatomic) NSURL *maximumSize;
@property(copy, nonatomic) NSURL *largeSize;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSURL *fullsize;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

