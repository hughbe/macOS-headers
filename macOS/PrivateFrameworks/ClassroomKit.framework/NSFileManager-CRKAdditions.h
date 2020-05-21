//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CRKAdditions)
+ (id)crk_computeNonContainerizedHomeDirectoryURL;
+ (id)crk_nonContainerizedHomeDirectoryURL;
- (id)crk_collisionAvoidingURLForURL:(id)arg1;
- (id)crk_deepContentsOfDirectoryAtPath:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)crk_safeRemoveItemAtURL:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL crk_isStudentdInstalled;
@end

