//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICUnsupportedObjectPredicateHelper : NSObject
{
}

+ (id)unitTest_unsupportedFolderIdentifiersWithContext:(id)arg1;
+ (id)unitTest_unsupportedAttachmentIdentifiersWithContext:(id)arg1;
+ (id)unsupportedAttachmentIdentifiersWithContext:(id)arg1;
+ (void)recursivelyAddAttachment:(id)arg1 toMutableSet:(id)arg2;
+ (id)unsupportedFolderIdentifiersWithContext:(id)arg1;
+ (void)recursivelyAddFolder:(id)arg1 toMutableSet:(id)arg2;
+ (id)predicateForSupportedAttachments;
+ (id)predicateForSupportedNotes;
+ (id)predicateForSupportedFolders;

@end

