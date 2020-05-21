//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSCyclerServiceProxy;

@interface WBSSafariCyclerConfigurationTool : NSObject
{
    WBSCyclerServiceProxy *_cyclerProxy;
}

- (void).cxx_destruct;
- (void)_waitForCyclerToFinish:(id)arg1;
- (void)_fetchStatus:(id)arg1;
- (void)_configureDevice:(id)arg1;
- (void)_sendRequestToTest:(id)arg1;
- (void)_setConfigurationOption:(id)arg1;
- (void)_resumeCycler:(id)arg1;
- (void)_stopCycler:(id)arg1;
- (void)_startCycler:(id)arg1;
- (void)_runTest:(id)arg1;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_exitWithError:(id)arg1;
- (void)_printUsage;
- (id)_commandWithName:(id)arg1;
- (id)_supportedCommands;
- (void)run;
- (id)init;

@end

