//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAWebWebResult.h>

@class NSDate, NSString;

@interface SAWebNewsResult : SAWebWebResult
{
}

+ (id)newsResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newsResult;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSDate *publicationDate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

