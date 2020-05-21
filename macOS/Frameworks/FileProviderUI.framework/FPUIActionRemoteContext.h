//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <FileProviderUI/FPUIActionRemoteContextProtocol-Protocol.h>

@class NSString;
@protocol FPUIActionRemoteContextDelegate;

@interface FPUIActionRemoteContext : NSExtensionContext <FPUIActionRemoteContextProtocol>
{
    id <FPUIActionRemoteContextDelegate> _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FPUIActionRemoteContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didEncounterError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_completeRequestWithUserInfo:(id)arg1 error:(id)arg2;
- (void)_openExtensionURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

