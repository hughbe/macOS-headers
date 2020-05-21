//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFEWSNetworkTaskOperation.h>

@class ECLocalMessageAction, NSProgress;
@protocol MFEWSMessageActionSyncOperationDelegate;

@interface MFEWSMessageActionSyncOperation : MFEWSNetworkTaskOperation
{
    ECLocalMessageAction *_messageAction;
    NSProgress *_progress;
    id <MFEWSMessageActionSyncOperationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MFEWSMessageActionSyncOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) ECLocalMessageAction *messageAction; // @synthesize messageAction=_messageAction;
- (id)folderIDStringForMailboxURLString:(id)arg1;
- (id)folderIDStringForMailbox:(id)arg1;
- (BOOL)isRecoverableError:(id)arg1;
- (id)init;
- (id)initWithMessageAction:(id)arg1;

@end

