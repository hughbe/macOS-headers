//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLSearchResult.h>

@class NSArray, NSDate;

@interface PLAssetSearchResult : PLSearchResult
{
    NSDate *_sortDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *sortDate; // @synthesize sortDate=_sortDate;
@property(readonly, nonatomic) NSArray *assetUUIDs;
- (unsigned long long)assetCount;
- (id)keyAssetUUID;
- (unsigned long long)type;

@end

