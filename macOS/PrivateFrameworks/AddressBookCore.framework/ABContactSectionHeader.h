//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface ABContactSectionHeader : NSObject
{
    NSDictionary *_info;
    NSString *_nameTransform;
}

@property(readonly) NSString *nameTransform; // @synthesize nameTransform=_nameTransform;
@property(readonly) NSArray *headers;
@property(readonly) NSString *lastCharacter;
@property(readonly) NSString *firstCharacterAfterLanguage;
- (id)description;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

