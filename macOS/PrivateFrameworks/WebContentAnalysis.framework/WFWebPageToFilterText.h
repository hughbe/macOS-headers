//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebContentAnalysis/WFWebPageDecorator.h>

@interface WFWebPageToFilterText : WFWebPageDecorator
{
}

- (id)URLFuzzyForFilter;
- (id)URLFuzzyWithWordLength:(int)arg1;
- (BOOL)selfRestricted;
- (BOOL)isWorthAnalyzingWithEvidence:(int *)arg1 message:(id *)arg2;
- (id)rawPlainText;

@end

