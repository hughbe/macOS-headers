//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNContactMatchSummarizer : NSObject
{
    struct __CFStringTokenizer *_tokenizer;
}

+ (id)keyDescriptorForContactIdentifiers:(id)arg1 matchInfos:(id)arg2;
+ (id)summaryPropertyForMatchInfo:(id)arg1;
+ (id)summaryProperties;
- (id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long *)arg3;
- (id)summaryForContact:(id)arg1 matchInfo:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)summariesFutureForContactsIdentifiers:(id)arg1 matchInfos:(id)arg2 contactStore:(id)arg3 scheduler:(id)arg4;

@end

