//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EXSItemProperties, NSDate, NSString;

@interface EXSChangeItem : NSObject
{
    long long _changeID;
    long long _accountID;
    long long _itemType;
    long long _changeType;
    NSString *_changeSourceID;
    NSDate *_modificationDT;
    long long _itemID;
    NSString *_externalID;
    NSString *_externalChangeKey;
    NSString *_externalParentFolderID;
    NSString *_internalID;
    NSString *_internalChangeKey;
    NSString *_internalParentFolderID;
    EXSItemProperties *_properties;
}

+ (id)changeTypeToString:(long long)arg1;
+ (id)changeItemTypeToString:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) EXSItemProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *internalParentFolderID; // @synthesize internalParentFolderID=_internalParentFolderID;
@property(retain, nonatomic) NSString *internalChangeKey; // @synthesize internalChangeKey=_internalChangeKey;
@property(retain, nonatomic) NSString *internalID; // @synthesize internalID=_internalID;
@property(retain, nonatomic) NSString *externalParentFolderID; // @synthesize externalParentFolderID=_externalParentFolderID;
@property(retain, nonatomic) NSString *externalChangeKey; // @synthesize externalChangeKey=_externalChangeKey;
@property(retain, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSDate *modificationDT; // @synthesize modificationDT=_modificationDT;
@property(retain, nonatomic) NSString *changeSourceID; // @synthesize changeSourceID=_changeSourceID;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long changeID; // @synthesize changeID=_changeID;
- (id)description;
- (BOOL)itemTypeIsItem;
- (BOOL)itemTypeIsFolder;
- (id)initWithChangeID:(long long)arg1 accountID:(long long)arg2 itemType:(long long)arg3 changeType:(long long)arg4 changeSource:(id)arg5 modificationDateTime:(id)arg6 itemID:(long long)arg7 externalID:(id)arg8 externalChangeKey:(id)arg9 externalParentFolderID:(id)arg10 internalID:(id)arg11 internalChangeKey:(id)arg12 internalParentFolderID:(id)arg13 properties:(id)arg14;

@end

