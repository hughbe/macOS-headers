//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/CNChangeHistoryEventVisitor-Protocol.h>

@class NSMutableArray, NSString;

@interface ABPublicAPINotificationUserInfoSynthesizer : NSObject <CNChangeHistoryEventVisitor>
{
    BOOL _isReset;
    NSMutableArray *_added;
    NSMutableArray *_updated;
    NSMutableArray *_removed;
}

+ (id)userInfoWithEventEnumerator:(id)arg1;
+ (id)userInfoWithEvents:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *removed; // @synthesize removed=_removed;
@property(readonly, nonatomic) NSMutableArray *updated; // @synthesize updated=_updated;
@property(readonly, nonatomic) NSMutableArray *added; // @synthesize added=_added;
@property(nonatomic) BOOL isReset; // @synthesize isReset=_isReset;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitDeleteGroupEvent:(id)arg1;
- (void)visitUpdateGroupEvent:(id)arg1;
- (void)visitAddGroupEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (id)userInfo;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

