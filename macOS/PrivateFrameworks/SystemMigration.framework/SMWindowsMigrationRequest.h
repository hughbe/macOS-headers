//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigration/SMMigrationRequest.h>

#import <SystemMigration/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface SMWindowsMigrationRequest : SMMigrationRequest <NSSecureCoding>
{
    BOOL _copiesCustomFiles;
    NSString *_destinationPath;
    NSMutableArray *_systemComponentDicts;
    NSMutableArray *_otherDiskComponentDicts;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL copiesCustomFiles; // @synthesize copiesCustomFiles=_copiesCustomFiles;
@property(retain) NSMutableArray *otherDiskComponentDicts; // @synthesize otherDiskComponentDicts=_otherDiskComponentDicts;
@property(retain) NSMutableArray *systemComponentDicts; // @synthesize systemComponentDicts=_systemComponentDicts;
@property(copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (void)updateAutoLoginUser;
- (id)description;
- (id)exportXPCDict;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)init;

@end

