//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSSearchableItem.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface MDSearchableItem : CSSearchableItem
{
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSURL *thumbnailURL;
@property(copy) NSData *thumbnailImageData;
@property(copy) NSURL *contentURL;
@property(copy) NSString *contentUTI;
@property(copy) NSString *secondaryDisplayName;
@property(copy) NSString *displayName;
- (void)_standardizeDeprecatedProperties:(id)arg1;
@property(readonly, copy) NSString *localizedDisplayName;
@property(retain) NSDictionary *attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributes:(id)arg3;

@end

