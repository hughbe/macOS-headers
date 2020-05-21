//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class HFTriggerActionSetsBuilder, NSArray, NSString;

@interface WFHFTriggerActionSetsBuilderParameterState : NSObject <WFParameterState>
{
    NSString *_homeIdentifier;
    NSArray *_serializedActionSets;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *serializedActionSets; // @synthesize serializedActionSets=_serializedActionSets;
@property(readonly, copy, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)containedVariables;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithTriggerActionSetsBuilder:(id)arg1;
@property(readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

