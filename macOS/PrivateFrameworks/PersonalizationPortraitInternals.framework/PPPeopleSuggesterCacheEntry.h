//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PPPeopleSuggesterCacheEntry : NSObject
{
    double _cacheTimeSecondsSince1970;
    NSArray *_identifiers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(nonatomic) double cacheTimeSecondsSince1970; // @synthesize cacheTimeSecondsSince1970=_cacheTimeSecondsSince1970;

@end

