//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;

@interface GKComponentSystem : NSObject <NSFastEnumeration>
{
    NSMutableArray *_components;
    Class _componentClass;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class componentClass; // @synthesize componentClass=_componentClass;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (void)updateWithDeltaTime:(double)arg1;
- (void)removeComponent:(id)arg1;
- (void)removeComponentWithEntity:(id)arg1;
- (void)addComponentWithEntity:(id)arg1;
- (void)addComponent:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, retain, nonatomic) NSArray *components;
- (id)initWithComponentClass:(Class)arg1;

@end

