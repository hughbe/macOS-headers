//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/AMPluginInstallerController.h>

@class NSURL;

@interface AMActionInstallerController : AMPluginInstallerController
{
    NSURL *_actionURL;
}

- (void).cxx_destruct;
@property(retain) NSURL *actionURL; // @synthesize actionURL=_actionURL;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)arg1 error:(id *)arg2;
- (id)_iconImage;
- (id)_pluginURL;
- (id)_pluginLibrarySubPath;
- (id)_installationInfoString;
- (id)_pluginTypeName;
- (BOOL)_pluginIsInstallableReturningError:(id *)arg1;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)_completedInstallationInfoString;
- (BOOL)isConversionAction;
- (id)initWithActionURL:(id)arg1;

@end

