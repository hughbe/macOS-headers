//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ML3Artwork : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _artworkType;
    long long _sourceType;
    NSDictionary *_interestDictionary;
    ML3MusicLibrary *_musicLibrary;
    NSString *_artworkToken;
    NSString *_relativePath;
    NSURL *_originalFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *originalFileURL; // @synthesize originalFileURL=_originalFileURL;
@property(readonly, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(readonly, nonatomic) NSString *artworkToken; // @synthesize artworkToken=_artworkToken;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (id)_interestDataFromInterestDictionary:(id)arg1;
- (id)_interestDictionaryFromInterestData:(id)arg1;
- (void)_onSerialQueue_faultInProperties;
@property(retain, nonatomic) NSDictionary *interestDictionary; // @synthesize interestDictionary=_interestDictionary;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
- (id)fileURLForEffect:(id)arg1;
- (id)fileURLForSize:(struct CGSize)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithToken:(id)arg1 relativePath:(id)arg2 artworkType:(long long)arg3 musicLibrary:(id)arg4;
- (id)initWithToken:(id)arg1 artworkType:(long long)arg2 musicLibrary:(id)arg3;

@end

