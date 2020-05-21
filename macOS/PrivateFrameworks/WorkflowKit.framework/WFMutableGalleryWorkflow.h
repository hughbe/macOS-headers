//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFGalleryWorkflow.h>

@class CKRecordID, NSDate, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFMutableGalleryWorkflow : WFGalleryWorkflow
{
    CKRecordID *identifier;
    NSString *name;
    NSString *shortDescription;
    NSString *longDescription;
    NSNumber *searchable;
    WFWorkflowRecord *workflowRecord;
    NSDate *modifiedAt;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
    WFFileRepresentation *shortcutFile;
    WFFileRepresentation *iconFile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFFileRepresentation *iconFile; // @synthesize iconFile;
@property(retain, nonatomic) WFFileRepresentation *shortcutFile; // @synthesize shortcutFile;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
@property(retain, nonatomic) CKRecordID *base; // @synthesize base;
@property(copy, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt;
@property(retain, nonatomic) WFWorkflowRecord *workflowRecord; // @synthesize workflowRecord;
@property(retain, nonatomic) NSNumber *searchable; // @synthesize searchable;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription;
@property(copy, nonatomic) NSString *shortDescription; // @synthesize shortDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) CKRecordID *identifier; // @synthesize identifier;
@property(retain, nonatomic) WFWorkflowIcon *icon; // @dynamic icon;

@end

