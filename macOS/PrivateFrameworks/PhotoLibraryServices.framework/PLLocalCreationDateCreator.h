//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject
{
    PFTimeZoneLookup *_timeZoneLookup;
}

+ (void)initialize;
+ (id)_gmtTranslationDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup; // @synthesize timeZoneLookup=_timeZoneLookup;
- (id)generateInferredTimeZoneOffsetForAsset:(id)arg1;
- (id)init;

@end

