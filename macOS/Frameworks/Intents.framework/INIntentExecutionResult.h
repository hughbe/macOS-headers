//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class INIntent, INIntentResponse;

@interface INIntentExecutionResult : NSObject <NSSecureCoding>
{
    INIntent *_intent;
    INIntentResponse *_intentResponse;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(readonly) INIntent *intent; // @synthesize intent=_intent;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIntent:(id)arg1 response:(id)arg2;

@end

