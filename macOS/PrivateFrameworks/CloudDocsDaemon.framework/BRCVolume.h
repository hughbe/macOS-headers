//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCVolume : NSObject
{
    struct statfs _stfs;
    BOOL _isCaseSensitive;
    BOOL _isIgnoringOwnership;
    BOOL _hasRenameExcl;
    BOOL _hasRenameSwap;
    BOOL _hasCloning;
    int _deviceID;
}

@property(readonly, nonatomic) BOOL hasCloning; // @synthesize hasCloning=_hasCloning;
@property(readonly, nonatomic) BOOL hasRenameSwap; // @synthesize hasRenameSwap=_hasRenameSwap;
@property(readonly, nonatomic) BOOL hasRenameExcl; // @synthesize hasRenameExcl=_hasRenameExcl;
@property(readonly, nonatomic) BOOL isIgnoringOwnership; // @synthesize isIgnoringOwnership=_isIgnoringOwnership;
@property(readonly, nonatomic) BOOL isCaseSensitive; // @synthesize isCaseSensitive=_isCaseSensitive;
@property(readonly, nonatomic) int deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSNumber *totalSize;
@property(readonly, nonatomic) NSNumber *freeSize;
- (id)description;
@property(readonly, nonatomic) NSString *fsTypeName;
@property(readonly, nonatomic) NSString *mountPath;
- (BOOL)setUpForRelPath:(id)arg1 session:(id)arg2 error:(id *)arg3;

@end

