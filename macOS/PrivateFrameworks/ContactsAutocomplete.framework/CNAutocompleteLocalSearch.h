//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNContactStore, NSString;

@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch>
{
    CNContactStore *_contactStore;
    CNContactStore *_contactFetcherStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContactStore *contactFetcherStore; // @synthesize contactFetcherStore=_contactFetcherStore;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)groupsForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;
- (id)peopleForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactStore:(id)arg1 contactFetcherStore:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

