//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSFolderResponseShapeType, EWSTargetFolderIdType, NSString;

@interface EWSSyncFolderHierarchyType : EWSBaseRequestType
{
    EWSFolderResponseShapeType *_FolderShape;
    EWSTargetFolderIdType *_SyncFolderId;
    NSString *_SyncState;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *SyncState; // @synthesize SyncState=_SyncState;
@property(retain, nonatomic) EWSTargetFolderIdType *SyncFolderId; // @synthesize SyncFolderId=_SyncFolderId;
@property(retain, nonatomic) EWSFolderResponseShapeType *FolderShape; // @synthesize FolderShape=_FolderShape;

@end

