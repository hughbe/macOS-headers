//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCFetchiWorkSharingInfoOperation : _BRCOperation <BRCOperationSubclass>
{
    CKRecordID *_recordID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithDocumentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

