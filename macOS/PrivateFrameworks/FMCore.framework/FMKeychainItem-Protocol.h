//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMCore/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol FMKeychainItem <NSObject>
@property(readonly, nonatomic) NSData *rawData;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSDate *lastModifyDate;
@property(readonly, nonatomic) NSString *password;
@end

