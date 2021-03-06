//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSArray, NSPredicate, VSOptional;

__attribute__((visibility("hidden")))
@interface VSKeychainFetchRequest : NSObject <NSCopying>
{
    BOOL _includesDataValues;
    VSOptional *_itemKind;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchLimit;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL includesDataValues; // @synthesize includesDataValues=_includesDataValues;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) VSOptional *itemKind; // @synthesize itemKind=_itemKind;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

