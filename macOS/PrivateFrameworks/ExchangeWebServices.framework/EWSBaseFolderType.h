//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSEffectiveRightsType, EWSFolderIdType, NSArray, NSString;

@interface EWSBaseFolderType : NSObject <XSDefinitionProvider>
{
    BOOL _TotalCountSpecified;
    BOOL _ChildFolderCountSpecified;
    EWSFolderIdType *_FolderId;
    EWSFolderIdType *_ParentFolderId;
    NSString *_FolderClass;
    NSString *_DisplayName;
    long long _TotalCount;
    long long _ChildFolderCount;
    EWSEffectiveRightsType *_EffectiveRights;
    NSArray *_ExtendedProperty;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *ExtendedProperty; // @synthesize ExtendedProperty=_ExtendedProperty;
@property(retain, nonatomic) EWSEffectiveRightsType *EffectiveRights; // @synthesize EffectiveRights=_EffectiveRights;
@property(nonatomic) BOOL ChildFolderCountSpecified; // @synthesize ChildFolderCountSpecified=_ChildFolderCountSpecified;
@property(nonatomic) long long ChildFolderCount; // @synthesize ChildFolderCount=_ChildFolderCount;
@property(nonatomic) BOOL TotalCountSpecified; // @synthesize TotalCountSpecified=_TotalCountSpecified;
@property(nonatomic) long long TotalCount; // @synthesize TotalCount=_TotalCount;
@property(copy, nonatomic) NSString *DisplayName; // @synthesize DisplayName=_DisplayName;
@property(copy, nonatomic) NSString *FolderClass; // @synthesize FolderClass=_FolderClass;
@property(retain, nonatomic) EWSFolderIdType *ParentFolderId; // @synthesize ParentFolderId=_ParentFolderId;
@property(retain, nonatomic) EWSFolderIdType *FolderId; // @synthesize FolderId=_FolderId;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

