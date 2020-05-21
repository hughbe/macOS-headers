//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/_MRContentItemMetadataProtobuf.h>

@class NSArray, NSDate, NSDictionary, NSObject, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRContentItemMetadata : _MRContentItemMetadataProtobuf
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_assetURL;
    NSDictionary *_userInfo;
    NSDictionary *_appMetrics;
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_collectionInfo;
    NSDate *_currentPlaybackDate;
    NSDictionary *_deviceSpecificUserInfo;
    NSArray *_artworkURLTemplates;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *artworkURLTemplates; // @synthesize artworkURLTemplates=_artworkURLTemplates;
- (id)customDictionaryRepresentation;
@property(copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(copy, nonatomic) NSDate *currentPlaybackDate;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(copy, nonatomic) NSDictionary *appMetrics;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSURL *assetURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeFrom:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

