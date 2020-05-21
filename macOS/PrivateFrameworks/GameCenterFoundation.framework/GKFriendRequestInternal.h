//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSDate, NSString;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal
{
    NSString *_message;
    NSDate *_date;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (int)defaultFamiliarity;
- (void)dealloc;

@end

