//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/MCMessageSortingInterface-Protocol.h>

@class ECSubject, MFMailbox, NSArray, NSString;

@interface MFMessageSortingValue : NSObject <MCMessageSortingInterface>
{
}

+ (void)removeEverythingExceptMessages:(id)arg1 fromSortData:(id)arg2;
+ (void)addMessages:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3;
+ (void)addMessage:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3;
+ (void)removeMessage:(id)arg1 fromSortData:(id)arg2;
+ (id)_newSortOrderDictionary;
+ (id)mutableCopyOfSortData:(id)arg1;
+ (id)_automaticSecondarySortForPrimarySort:(id)arg1;
+ (id)copySortDataForMessages:(id)arg1 sortOrders:(id)arg2 includeDataForAutomaticSecondarySort:(BOOL)arg3 withDelegate:(id)arg4;
+ (void)addSortData:(id)arg1 forMessages:(id)arg2 sortOrder:(id)arg3 withDelegate:(id)arg4;
+ (id)equivalentSortsForSort:(id)arg1;
@property(readonly, nonatomic) long long libraryID;
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly) double dateSentAsTimeIntervalSince1970;
@property(readonly) double dateReceivedAsTimeIntervalSince1970;
@property(readonly, copy) NSArray *to;
@property(readonly, copy) ECSubject *subject;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, nonatomic) unsigned long long messageSize;
@property(readonly, copy, nonatomic) NSString *senderDisplayName;
@property(readonly) unsigned long long conversationFlags;
@property(readonly, nonatomic) unsigned char flagColorSet;
@property(readonly, nonatomic) long long messageFlags;
@property(readonly) double dateLastViewedAsTimeIntervalSince1970;
@property(readonly, nonatomic) int colorForSort;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

