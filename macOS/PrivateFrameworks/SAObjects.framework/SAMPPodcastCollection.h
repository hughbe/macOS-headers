//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMPCollection.h>

@class NSArray, NSNumber, NSString;

@interface SAMPPodcastCollection : SAMPCollection
{
}

+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)podcastCollection;
@property(copy, nonatomic) NSNumber *subscribed;
@property(copy, nonatomic) NSString *sortArtist;
@property(copy, nonatomic) NSArray *preferredPlayOrder;
@property(copy, nonatomic) NSString *artist;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

