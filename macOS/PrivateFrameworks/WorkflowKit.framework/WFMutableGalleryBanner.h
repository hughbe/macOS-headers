//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFGalleryBanner.h>

@class CKRecordID, NSString;

@interface WFMutableGalleryBanner : WFGalleryBanner
{
    CKRecordID *identifier;
    NSString *name;
    CKRecordID *detailPage;
    NSString *language;
    CKRecordID *base;
    NSString *persistentIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
@property(retain, nonatomic) CKRecordID *base; // @synthesize base;
@property(copy, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) CKRecordID *detailPage; // @synthesize detailPage;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) CKRecordID *identifier; // @synthesize identifier;

@end

