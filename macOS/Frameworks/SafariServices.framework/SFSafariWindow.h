//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/NSCopying-Protocol.h>
#import <SafariServices/NSSecureCoding-Protocol.h>

@class NSExtensionContext, NSUUID;

@interface SFSafariWindow : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
    NSExtensionContext *__extensionContext;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSExtensionContext *_extensionContext; // @synthesize _extensionContext=__extensionContext;
- (void)close;
- (void)getToolbarItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openTabWithURL:(id)arg1 makeActiveIfPossible:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllTabsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getActiveTabWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUUID *_uuid;
- (id)_initWithUUID:(id)arg1;

@end

