//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSCopying-Protocol.h>
#import <CardKit/NSObject-Protocol.h>

@class NSDictionary;

@protocol CRCommand <NSObject, NSCopying>
@property(nonatomic) unsigned long long commandDirection;
@property(copy, nonatomic) NSDictionary *userInfo;
@end

