//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASBContainerAction : NSObject
{
}

+ (id)actionUnsharePreferenceDomain:(id)arg1;
+ (id)actionStopBackupExclude:(id)arg1;
+ (id)actionBackupExclude:(id)arg1;
+ (id)actionMakeDirectory:(id)arg1;
+ (id)actionUnlink:(id)arg1;
+ (id)actionSymlinkTo:(id)arg1 as:(id)arg2;
+ (id)actionCopyContentsOf:(id)arg1 to:(id)arg2;
+ (id)actionCopyFrom:(id)arg1 to:(id)arg2;
+ (id)actionMoveContentsOf:(id)arg1 to:(id)arg2;
+ (id)actionMoveFrom:(id)arg1 to:(id)arg2;
+ (id)actionWithName:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (BOOL)performWithContainer:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
- (id)description;

@end

