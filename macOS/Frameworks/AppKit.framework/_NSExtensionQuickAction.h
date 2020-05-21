//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/_NSQuickAction.h>

@class NSDictionary, NSSharingService, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _NSExtensionQuickAction : _NSQuickAction
{
    NSSharingService *_sharingService;
    NSDictionary *_extensionAttributes;
    NSString *_extensionIdentifier;
    NSURL *_bundleURL;
}

+ (id)quickActionForPresentation:(id)arg1 extension:(id)arg2;
- (void).cxx_destruct;
- (id)_bundleURL;
@property(readonly, copy) NSString *_extensionIdentifier; // @synthesize _extensionIdentifier;
@property(readonly) NSSharingService *_sharingService; // @synthesize _sharingService;
- (BOOL)canMoveToTrash;
- (Class)_preferencesClass;
- (Class)_validationClass;
- (void)performWithItemSource:(id)arg1;
- (BOOL)needsItemSource;
- (long long)type;
- (void)loadColorOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasColor;
- (void)loadIconOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasIcon;
- (id)title;
- (id)init;
- (id)initForPresentation:(id)arg1 identifier:(id)arg2 extension:(id)arg3 sharingService:(id)arg4;

@end

