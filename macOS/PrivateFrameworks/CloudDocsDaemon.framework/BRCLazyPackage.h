//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCStageRegistry, CKPackage, NSString;

__attribute__((visibility("hidden")))
@interface BRCLazyPackage : NSObject
{
    BRCStageRegistry *_registry;
    NSString *_stageID;
    NSString *_name;
    CKPackage *_package;
}

- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (id)closeAndReturn;
- (BOOL)addItem:(id)arg1 error:(id *)arg2;
- (id)initWithRegistry:(id)arg1 stageID:(id)arg2 name:(id)arg3;

@end

