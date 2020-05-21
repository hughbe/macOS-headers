//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSCopying-Protocol.h>
#import <SpotlightServices/NSSecureCoding-Protocol.h>

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying>
{
    short _renderValues[6];
    short _engagementValues[6];
}

+ (BOOL)supportsSecureCoding;
- (void)incrementRankingValuesForType:(int)arg1;
- (void)setRankingValues:(short [6])arg1 forType:(int)arg2;
- (BOOL)getRankingValues:(short *)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

