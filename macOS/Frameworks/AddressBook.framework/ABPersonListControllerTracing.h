//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABPersonListControllerTracing : NSObject
{
}

+ (BOOL)shouldShowSiriSuggestions;
+ (id)suggestionLoggingForService;
+ (void)traceSearchDidComplete:(BOOL)arg1;
+ (void)traceDidSelectSuggestion:(BOOL)arg1 suggestedRecordId:(id)arg2 contactId:(id)arg3;

@end

