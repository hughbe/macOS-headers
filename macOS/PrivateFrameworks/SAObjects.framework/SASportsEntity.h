//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDictionary, NSString, NSURL, SASportsLeague, SAUIAppPunchOut;

@interface SASportsEntity : SADomainObject
{
}

+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entity;
@property(copy, nonatomic) NSArray *themeImages;
@property(retain, nonatomic) SAUIAppPunchOut *punchout;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSDictionary *listImages;
@property(copy, nonatomic) NSURL *listImage;
@property(retain, nonatomic) SASportsLeague *league;
@property(copy, nonatomic) NSDictionary *largeImages;
@property(copy, nonatomic) NSURL *largeImage;
@property(copy, nonatomic) NSDictionary *images;
@property(copy, nonatomic) NSURL *image;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

