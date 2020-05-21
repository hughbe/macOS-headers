//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRPlayerPath, NSArray, NSData, NSString, _MRPlaybackQueueRequestProtobuf;

__attribute__((visibility("hidden")))
@interface MRPlaybackQueueRequest : NSObject
{
    BOOL _hasLocation;
    BOOL _hasLength;
    BOOL _includeMetadata;
    BOOL _hasIncludeMetadata;
    BOOL _hasArtworkWidth;
    BOOL _hasArtworkHeight;
    BOOL _includeLyrics;
    BOOL _hasIncludeLyrics;
    BOOL _includeSections;
    BOOL _hasIncludeSections;
    BOOL _includeInfo;
    BOOL _hasIncludeInfo;
    BOOL _includeLanguageOptions;
    BOOL _hasIncludeLanguageOptions;
    BOOL _returnContentItemAssetsInUserCompletion;
    BOOL _hasReturnContentItemAssetsInUserCompletion;
    BOOL _isLegacyNowPlayingInfoRequest;
    BOOL _hasIsLegacyNowPlayingInfoRequest;
    BOOL _hasCachingPolicy;
    long long _location;
    long long _length;
    double _artworkWidth;
    double _artworkHeight;
    long long _cachingPolicy;
    MRPlayerPath *_playerPath;
    NSString *_requestIdentifier;
    NSString *_label;
    NSArray *_contentItemIdentifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *contentItemIdentifiers; // @synthesize contentItemIdentifiers=_contentItemIdentifiers;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) BOOL hasCachingPolicy; // @synthesize hasCachingPolicy=_hasCachingPolicy;
@property(nonatomic) long long cachingPolicy; // @synthesize cachingPolicy=_cachingPolicy;
@property(nonatomic) BOOL hasIsLegacyNowPlayingInfoRequest; // @synthesize hasIsLegacyNowPlayingInfoRequest=_hasIsLegacyNowPlayingInfoRequest;
@property(nonatomic) BOOL isLegacyNowPlayingInfoRequest; // @synthesize isLegacyNowPlayingInfoRequest=_isLegacyNowPlayingInfoRequest;
@property(nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion; // @synthesize hasReturnContentItemAssetsInUserCompletion=_hasReturnContentItemAssetsInUserCompletion;
@property(nonatomic) BOOL returnContentItemAssetsInUserCompletion; // @synthesize returnContentItemAssetsInUserCompletion=_returnContentItemAssetsInUserCompletion;
@property(nonatomic) BOOL hasIncludeLanguageOptions; // @synthesize hasIncludeLanguageOptions=_hasIncludeLanguageOptions;
@property(nonatomic) BOOL includeLanguageOptions; // @synthesize includeLanguageOptions=_includeLanguageOptions;
@property(nonatomic) BOOL hasIncludeInfo; // @synthesize hasIncludeInfo=_hasIncludeInfo;
@property(nonatomic) BOOL includeInfo; // @synthesize includeInfo=_includeInfo;
@property(nonatomic) BOOL hasIncludeSections; // @synthesize hasIncludeSections=_hasIncludeSections;
@property(nonatomic) BOOL includeSections; // @synthesize includeSections=_includeSections;
@property(nonatomic) BOOL hasIncludeLyrics; // @synthesize hasIncludeLyrics=_hasIncludeLyrics;
@property(nonatomic) BOOL includeLyrics; // @synthesize includeLyrics=_includeLyrics;
@property(nonatomic) BOOL hasArtworkHeight; // @synthesize hasArtworkHeight=_hasArtworkHeight;
@property(nonatomic) double artworkHeight; // @synthesize artworkHeight=_artworkHeight;
@property(nonatomic) BOOL hasArtworkWidth; // @synthesize hasArtworkWidth=_hasArtworkWidth;
@property(nonatomic) double artworkWidth; // @synthesize artworkWidth=_artworkWidth;
@property(nonatomic) BOOL hasIncludeMetadata; // @synthesize hasIncludeMetadata=_hasIncludeMetadata;
@property(nonatomic) BOOL includeMetadata; // @synthesize includeMetadata=_includeMetadata;
@property(nonatomic) BOOL hasLength; // @synthesize hasLength=_hasLength;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) BOOL hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) long long location; // @synthesize location=_location;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRPlaybackQueueRequestProtobuf *protobuf;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

