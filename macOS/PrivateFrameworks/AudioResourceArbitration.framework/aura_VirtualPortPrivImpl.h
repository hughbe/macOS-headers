//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioResourceArbitration/aura_VirtualPortPriv-Protocol.h>

@class NSString;
@protocol aura_Port;

__attribute__((visibility("hidden")))
@interface aura_VirtualPortPrivImpl : NSObject <aura_VirtualPortPriv>
{
    shared_ptr_bb316d66 reactor_;
}

+ (id)virtualPortWithReactor:(shared_ptr_bb316d66)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (expected_b2b3f2ff)controlForClassID:(unsigned int)arg1 scope:(const unsigned int *)arg2 element:(unsigned int)arg3;
- (vector_53af465e)controlsForScope:(const unsigned int *)arg1;
- (vector_53af465e)controls;
@property(readonly, nonatomic) optional_cd8a9b08 manufacturerName;
@property(readonly, nonatomic) optional_cd8a9b08 modelName;
@property(readonly, nonatomic) optional_cd8a9b08 name;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2 qualifier:(id)arg3;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1 qualifier:(id)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1;
- (BOOL)isPropertySettable:(const struct Address *)arg1;
- (BOOL)hasProperty:(const struct Address *)arg1;
@property(readonly, nonatomic) unsigned int stockClassID;
@property(readonly, nonatomic) unsigned int classID;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) optional_95a1d2b1 activeMicrophoneConfiguration;
@property(readonly, nonatomic) _Bool canSetRoutable;
@property(readonly, nonatomic) _Bool routable;
@property(readonly, nonatomic) __weak id <aura_Port> port;
@property(readonly, nonatomic) weak_ptr_754246e0 reactor;
- (id)initWithReactor:(shared_ptr_bb316d66)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

