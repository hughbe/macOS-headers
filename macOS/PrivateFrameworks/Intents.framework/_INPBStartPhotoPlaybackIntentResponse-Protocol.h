//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocation;

@protocol _INPBStartPhotoPlaybackIntentResponse <NSObject>
@property(nonatomic) BOOL hasSearchResultsCount;
@property(nonatomic) int searchResultsCount;
@property(readonly, nonatomic) BOOL hasLocationCreated;
@property(retain, nonatomic) _INPBLocation *locationCreated;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(copy, nonatomic) NSString *albumName;
@end

