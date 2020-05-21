//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, EKEventStore, PPEventKitNotificationHandler, PPNotificationHandler;
@protocol NSObject, SGSuggestionsServiceContactsProtocol;

@interface PPNotificationManagerGuardedData : NSObject
{
    PPNotificationHandler *_contactsHandler;
    id <NSObject> _contactsToken;
    CNContactStore *_cnStore;
    PPNotificationHandler *_meCardHandler;
    id <NSObject> _meCardToken;
    id <NSObject> _meCardDonationToken;
    PPNotificationHandler *_portraitChangeHandler;
    int _portraitChangeToken;
    PPNotificationHandler *_portraitInvalidationHandler;
    int _portraitInvalidationToken;
    PPEventKitNotificationHandler *_eventKitHandler;
    id <NSObject> _eventKitToken;
    EKEventStore *_ekStore;
    long long _eventKitChangeTrackingToken;
    id <SGSuggestionsServiceContactsProtocol> _suggestionsService;
    PPNotificationHandler *_suggestionsHandler;
    id _suggestionsToken;
}

- (void).cxx_destruct;
- (id)description;

@end

