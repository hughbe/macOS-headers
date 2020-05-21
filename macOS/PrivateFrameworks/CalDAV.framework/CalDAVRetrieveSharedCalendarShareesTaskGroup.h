//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class NSSet, NSString, NSURL;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    NSSet *_sharees;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSSet *sharees; // @synthesize sharees=_sharees;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithCalendarURL:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

