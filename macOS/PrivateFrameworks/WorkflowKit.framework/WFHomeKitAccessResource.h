//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

#import <WorkflowKit/WFHomeManagerEventObserver-Protocol.h>

@class NSString;

@interface WFHomeKitAccessResource : WFAccessResource <WFHomeManagerEventObserver>
{
    CDUnknownBlockType _completionHandler;
}

+ (BOOL)isSystemResource;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

