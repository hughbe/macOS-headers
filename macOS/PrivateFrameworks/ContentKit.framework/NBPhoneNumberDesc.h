//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NBPhoneNumberDesc : NSObject
{
    NSString *_nationalNumberPattern;
    NSString *_possibleNumberPattern;
    NSString *_exampleNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *exampleNumber; // @synthesize exampleNumber=_exampleNumber;
@property(retain, nonatomic) NSString *possibleNumberPattern; // @synthesize possibleNumberPattern=_possibleNumberPattern;
@property(retain, nonatomic) NSString *nationalNumberPattern; // @synthesize nationalNumberPattern=_nationalNumberPattern;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithNationalNumberPattern:(id)arg1 withPossibleNumberPattern:(id)arg2 withExample:(id)arg3;
- (id)initWithData:(id)arg1;

@end

