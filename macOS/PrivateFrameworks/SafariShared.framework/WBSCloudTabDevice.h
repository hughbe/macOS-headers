//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface WBSCloudTabDevice : NSObject <NSCopying>
{
    BOOL _closeRequestSupported;
    BOOL _hasDuplicateName;
    BOOL _ephemeralDevice;
    BOOL _cloudKitBookmarkSyncingSupported;
    NSString *_name;
    NSString *_uuid;
    NSArray *_tabs;
    NSDate *_lastModified;
}

+ (BOOL)isEphemeralDeviceInDictionary:(id)arg1;
+ (BOOL)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (id)deviceNameInDictionary:(id)arg1;
+ (unsigned long long)tabCountInDictionary:(id)arg1;
+ (BOOL)isCloudTabDeviceDictionary:(id)arg1;
+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 isEphemeralDevice:(BOOL)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCloudKitBookmarkSyncingSupported) BOOL cloudKitBookmarkSyncingSupported; // @synthesize cloudKitBookmarkSyncingSupported=_cloudKitBookmarkSyncingSupported;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, copy, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic, getter=isEphemeralDevice) BOOL ephemeralDevice; // @synthesize ephemeralDevice=_ephemeralDevice;
@property(readonly, nonatomic) BOOL hasDuplicateName; // @synthesize hasDuplicateName=_hasDuplicateName;
@property(readonly, nonatomic, getter=isCloseRequestSupported) BOOL closeRequestSupported; // @synthesize closeRequestSupported=_closeRequestSupported;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)deviceByRemovingTabs:(id)arg1;
- (id)deviceByRemovingTab:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 uuid:(id)arg5 isEphemeralDevice:(BOOL)arg6;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;

@end

