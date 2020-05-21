//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSString, TMAPIClient, WFAppInstalledResource;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource>
{
    TMAPIClient *_client;
    WFAppInstalledResource *_appInstalledResource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFAppInstalledResource *appInstalledResource; // @synthesize appInstalledResource=_appInstalledResource;
- (id)inputContentClasses;
- (BOOL)inputsMultipleItems;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateTagsParameterHidden;
- (void)openPostWithType:(id)arg1 withParameters:(id)arg2;
- (void)openFiles:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
@property(readonly, nonatomic) TMAPIClient *client; // @synthesize client=_client;
- (void)initializeParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

