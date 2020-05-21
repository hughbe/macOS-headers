//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <FinderKit/FIFinderSyncExtensionHostProtocol-Protocol.h>
#import <FinderKit/NSMenuDelegate-Protocol.h>

@class NSDictionary, NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface FIFinderSyncExtensionHost_Badging : NSExtensionContext <FIFinderSyncExtensionHostProtocol, NSMenuDelegate>
{
    struct TNSRef<NSObject<FIFinderSyncExtensionProtocol>, void> _remote;
    NSExtension *_extension;
    struct unordered_map<TString, TNSRef<NSImage, void>, std::__1::hash<TString>, std::__1::equal_to<TString>, std::__1::allocator<std::__1::pair<const TString, TNSRef<NSImage, void>>>> _badgeIDImages;
    struct unordered_map<TString, TString, std::__1::hash<TString>, std::__1::equal_to<TString>, std::__1::allocator<std::__1::pair<const TString, TString>>> _badgeIDLabels;
    struct TString _toolbarItemName;
    struct TString _toolbarToolTip;
    struct TNSRef<NSData, void> _toolbarImageData;
    _Bool _toolbarImageIsTemplate;
    struct TFENodeVector _interestedRoots;
    struct vector<TNSRef<NSURL, void>, std::__1::allocator<TNSRef<NSURL, void>>> _unresolvedRoots;
    struct unordered_map<TFENode, TString, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TString>>> _nodeToBadgeIDMap;
    _Bool _fetchedContainingAppIcon;
    struct TIconRef _containingAppIcon;
    _Bool _finishedRegisteringInterestedURLs;
    id _requestIdentifier;
    NSDictionary *_toolbarItemDictionary;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool finishedRegisteringInterestedURLs; // @synthesize finishedRegisteringInterestedURLs=_finishedRegisteringInterestedURLs;
@property(copy, nonatomic) NSDictionary *toolbarItemDictionary; // @synthesize toolbarItemDictionary=_toolbarItemDictionary;
@property(retain, nonatomic) id requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)replyWithMessageInterfaceNames:(id)arg1 forURL:(id)arg2;
- (void)executePlugInCommand:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)closeContainer:(const struct TFENode *)arg1;
- (void)openContainer:(const struct TFENode *)arg1;
- (void)setContainingAppIcon:(struct TIconRef)arg1;
- (struct TIconRef)containingAppIcon;
- (struct TIconRef)sidebarIconForFolder:(const struct TFENode *)arg1;
- (struct TString)badgeLabelForIdentifier:(const struct TString *)arg1;
- (id)badgeImageForIdentifier:(const struct TString *)arg1;
- (void)updateSidebarIconForNode:(const struct TFENode *)arg1;
- (void)updatedBadgeForNode:(const struct TFENode *)arg1;
- (struct TString)badgeIdentifierForNode:(const struct TFENode *)arg1;
- (_Bool)interestedInNode:(const struct TFENode *)arg1;
- (_Bool)managesNodes:(const struct TFENodeVector *)arg1 target:(const struct TFENode *)arg2;
- (void)checkUnresolvedRootsAsync;
- (void)registerFutureInterestInDirectoryURL:(id)arg1;
- (_Bool)allowedToRegisterForContainer:(struct TFENode)arg1;
- (void)finishedRegisteringInterestInContainers;
- (void)registerInterestInContainer:(struct TFENode)arg1;
- (id)imageForToolbarItem;
- (struct TString)toolbarToolTip;
- (id)toolbarImageData;
- (struct TString)toolbarItemName;
- (void)setToolbarItemName:(id)arg1 imageData:(id)arg2 isTemplate:(_Bool)arg3 toolTip:(id)arg4;
- (void)dealloc;
- (void)tearDownWhileLocked;
- (void)configureFromAttributes;
- (void)setBadgeIdentifiersForURLs:(id)arg1;
- (void)setBadgeImageDictionary:(id)arg1 label:(id)arg2 forIdentifier:(id)arg3;
- (id)arrayOfInterestedURLStrings;
- (void)unregisterForDirectoryAtURL:(id)arg1;
- (void)registerForDirectoryAtURL:(id)arg1;
- (id)remote;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

