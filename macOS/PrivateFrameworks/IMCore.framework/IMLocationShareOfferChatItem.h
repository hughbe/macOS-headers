//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMMessageChatItem-Protocol.h>

@class IMHandle, NSDate, NSString;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
    IMHandle *_sender;
    BOOL _actionableEclipsed;
}

- (void).cxx_destruct;
- (void)_setActionableEclipsed:(BOOL)arg1;
- (BOOL)_isActionableEclipsed;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) long long offerState;
@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) BOOL isFromMe;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

