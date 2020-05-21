//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, SALocalSearchRating;

@interface SALocalSearchReviewList : AceObject <SAAceSerializable>
{
}

+ (id)reviewListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reviewList;
@property(copy, nonatomic) NSNumber *totalReviewCount;
@property(copy, nonatomic) NSArray *selectReviews;
@property(retain, nonatomic) SALocalSearchRating *rating;
@property(copy, nonatomic) NSString *providerId2;
@property(copy, nonatomic) NSURL *providerId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

