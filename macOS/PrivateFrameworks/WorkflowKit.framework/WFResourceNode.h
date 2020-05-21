//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFResourceNodeDelegate-Protocol.h>

@class NSArray, NSString, WFResource;
@protocol WFResourceNodeDelegate;

@interface WFResourceNode : NSObject <WFResourceNodeDelegate>
{
    WFResource *_resource;
    NSArray *_subnodes;
    id <WFResourceNodeDelegate> _delegate;
}

+ (id)nodesWithDefinitions:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WFResourceNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *subnodes; // @synthesize subnodes=_subnodes;
@property(readonly, nonatomic) WFResource *resource; // @synthesize resource=_resource;
- (void)resourceNodeAvailabilityChanged:(id)arg1;
- (void)dealloc;
- (void)resourceUpdated;
- (id)initWithResource:(id)arg1;
- (id)initWithResource:(id)arg1 subnodes:(id)arg2;
- (id)initWithDefinition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

