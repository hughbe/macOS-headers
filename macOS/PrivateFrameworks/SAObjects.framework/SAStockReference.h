//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject
{
}

+ (id)referenceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reference;
@property(copy, nonatomic) NSString *symbol;
@property(copy, nonatomic) NSString *companyName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

