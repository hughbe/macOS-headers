//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject
{
    BOOL _suggestionsFrameworkAvailable;
    NSObject<SGSuggestionsServiceEventsProtocol> *_service;
}

+ (id)defaultProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service; // @synthesize service=_service;
@property(nonatomic) BOOL suggestionsFrameworkAvailable; // @synthesize suggestionsFrameworkAvailable=_suggestionsFrameworkAvailable;
- (BOOL)eventsFoundInMailEnabled;
- (void)rejectSGEventWithRecordID:(id)arg1;
- (void)confirmSGEventWithRecordID:(id)arg1;
- (id)fakeSGRecordID;
- (id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id *)arg2;
- (id)senderForEventWithSuggestionID:(id)arg1;
- (void)confirmEventWithSuggestionID:(id)arg1;
- (id)sgEventFromUniqueID:(id)arg1 error:(id *)arg2;
- (void)_loadSuggestionsFramework;
- (id)init;

@end

