//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <AddressBookAutocomplete/ABAutocompleteSearchObservable-Protocol.h>

@class ABAddressBook, ABCNContactStore, CNAutocompleteFetchRequest, CNAutocompleteResultTracing, CNCancelationToken, NSString;
@protocol CNScheduler;

@interface ABAutocompleteLocalSearchObservable : CNObservable <ABAutocompleteSearchObservable>
{
    CNAutocompleteFetchRequest *_fetchRequest;
    id <CNScheduler> _scheduler;
    ABCNContactStore *_contactStore;
    ABAddressBook *_addressBook;
    CNAutocompleteResultTracing *_tracer;
    CNCancelationToken *_cancelationToken;
}

+ (id)observableWithFetchRequest:(id)arg1 scheduler:(id)arg2 contactStore:(id)arg3 addressBook:(id)arg4;
+ (id)observableWithFetchRequest:(id)arg1 scheduler:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) CNCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(retain) CNAutocompleteResultTracing *tracer; // @synthesize tracer=_tracer;
- (id)smartgroupsForRequest:(id)arg1 addressBook:(id)arg2;
- (id)groupsForRequest:(id)arg1 contactStore:(id)arg2;
- (id)peopleForRequest:(id)arg1 contactStore:(id)arg2;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (id)subscribe:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 scheduler:(id)arg2 contactStore:(id)arg3 addressBook:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

