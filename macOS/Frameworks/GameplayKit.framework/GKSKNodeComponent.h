//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKComponent.h>

#import <GameplayKit/GKAgentDelegate-Protocol.h>
#import <GameplayKit/GKSerializedNodeContaining-Protocol.h>

@class NSIndexPath, NSString, SKNode;

@interface GKSKNodeComponent : GKComponent <GKSerializedNodeContaining, GKAgentDelegate>
{
    NSIndexPath *_serializableNodeIndexPath;
    SKNode *_node;
}

+ (BOOL)supportsSecureCoding;
+ (id)componentWithNode:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SKNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSIndexPath *serializableNodeIndexPath; // @synthesize serializableNodeIndexPath=_serializableNodeIndexPath;
- (void)agentDidUpdate:(id)arg1;
- (void)agentWillUpdate:(id)arg1;
- (void)setEntity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

