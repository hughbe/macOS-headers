//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSCoding-Protocol.h>
#import <Navigation/NSObject-Protocol.h>

@class NSString, NSTimeZone;

@protocol GEOServerFormatTokenTimeStampValue <NSObject, NSCoding>
@property(readonly, nonatomic) NSString *formatPattern;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) double timeStamp;
@end

