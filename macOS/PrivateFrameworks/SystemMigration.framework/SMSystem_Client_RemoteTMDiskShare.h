//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigration/SMSystem_Client.h>

@class NSString;

@interface SMSystem_Client_RemoteTMDiskShare : SMSystem_Client
{
    long long sharedSystems;
    NSString *shareName;
    NSString *humanName;
}

+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingVolumeName;
+ (id)guiMonitorKeys;
- (void).cxx_destruct;
@property(retain) NSString *humanName; // @synthesize humanName;
@property(retain) NSString *shareName; // @synthesize shareName;
@property(readonly) long long sharedSystems; // @synthesize sharedSystems;
- (void)pressedActionButton:(id)arg1;
- (id)availableActionLabel;
- (id)displayState;
- (id)volumeIconAccesibilityLabel;
- (id)volumeIcon;
- (id)volumeName;
- (id)systemDescription;
- (id)displayName;
- (BOOL)isMounting;
- (BOOL)isMounted;
- (long long)defaultUIRank;

@end

