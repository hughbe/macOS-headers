//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _PARSilhouette_Topic;

@protocol _PARSilhouette <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *topics;
@property(nonatomic) int portraitVersion;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_PARSilhouette_Topic *)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)addTopics:(_PARSilhouette_Topic *)arg1;
- (void)clearTopics;
@end

