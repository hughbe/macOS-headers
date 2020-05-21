//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol HMFObject <NSObject>
+ (NSString *)shortDescription;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

@optional
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *propertyDescription;
@end

