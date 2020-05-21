//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@class SFCardSection, SFPunchout, SFSearchResult;

@interface SFUserReportFeedback : SFFeedback <NSCopying>
{
    SFSearchResult *_result;
    SFCardSection *_cardSection;
    SFPunchout *_userSelection;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SFPunchout *userSelection; // @synthesize userSelection=_userSelection;
@property(retain, nonatomic) SFCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3;

@end

