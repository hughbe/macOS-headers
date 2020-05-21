//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CodeRequirement : NSObject
{
    struct __SecRequirement *_secRequirementRef;
    NSData *_data;
    NSString *_text;
}

- (void).cxx_destruct;
@property(readonly) struct __SecRequirement *requirementRef; // @synthesize requirementRef=_secRequirementRef;
- (BOOL)validateCode:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)description;
- (id)stringValue;
- (id)data;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithText:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithSecRequirementRef:(struct __SecRequirement *)arg1;
- (id)init;

@end

