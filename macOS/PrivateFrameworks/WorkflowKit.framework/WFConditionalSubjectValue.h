//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class WFContentCollection;

@interface WFConditionalSubjectValue : NSObject <NSSecureCoding>
{
    BOOL _caseInsensitive;
    WFContentCollection *_content;
    long long _contentType;
    unsigned long long _comparableTimeUnits;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long comparableTimeUnits; // @synthesize comparableTimeUnits=_comparableTimeUnits;
@property(readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive; // @synthesize caseInsensitive=_caseInsensitive;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) WFContentCollection *content; // @synthesize content=_content;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 contentType:(long long)arg2 caseInsensitive:(BOOL)arg3 comparableTimeUnits:(unsigned long long)arg4;

@end

