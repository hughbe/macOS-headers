//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMRKResponse : NSObject
{
    NSString *_string;
    NSDictionary *_attributes;
    NSString *_category;
}

+ (id)alloc;
@property(readonly) NSString *category; // @synthesize category=_category;
@property(readonly) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly) NSString *string; // @synthesize string=_string;

@end

