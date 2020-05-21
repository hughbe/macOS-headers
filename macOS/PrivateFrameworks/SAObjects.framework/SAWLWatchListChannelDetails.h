//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAWLWatchListChannelDetails : AceObject <SAAceSerializable>
{
}

+ (id)watchListChannelDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)watchListChannelDetails;
@property(copy, nonatomic) NSURL *appStoreURL;
@property(copy, nonatomic) NSString *appName;
@property(copy, nonatomic) NSData *appIconDynamicImage;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

