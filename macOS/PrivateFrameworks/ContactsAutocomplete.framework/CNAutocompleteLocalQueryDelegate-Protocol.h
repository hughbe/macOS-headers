//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocomplete/NSObject-Protocol.h>

@class CNAutocompleteResultFactory, CNContactStore, NSArray, NSString;

@protocol CNAutocompleteLocalQueryDelegate <NSObject>
- (NSArray *)autocompleteResultsForProperties:(NSArray *)arg1 fetchResults:(NSArray *)arg2 resultFactory:(CNAutocompleteResultFactory *)arg3 contactStore:(CNContactStore *)arg4;
- (NSArray *)resultsForSearchString:(NSString *)arg1 terms:(NSArray *)arg2 properties:(NSArray *)arg3 contactStore:(CNContactStore *)arg4 error:(id *)arg5;
@end

