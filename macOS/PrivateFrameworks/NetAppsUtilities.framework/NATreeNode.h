//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NAIdentifiable-Protocol.h>
#import <NetAppsUtilities/NSCopying-Protocol.h>
#import <NetAppsUtilities/NSFastEnumeration-Protocol.h>
#import <NetAppsUtilities/NSMutableCopying-Protocol.h>
#import <NetAppsUtilities/NSObject-Protocol.h>

@class NSEnumerator, NSMutableSet, NSSet, NSString;

@interface NATreeNode : NSObject <NSObject, NSCopying, NSMutableCopying, NAIdentifiable, NSFastEnumeration>
{
    id _representedObject;
    NSMutableSet *_internalChildNodes;
}

+ (id)na_identity;
- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableSet *internalChildNodes; // @synthesize internalChildNodes=_internalChildNodes;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)childAtIndexPath:(id)arg1 withChildrenSortedByComparator:(CDUnknownBlockType)arg2;
- (id)childrenSortedByComparator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSEnumerator *shallowRepresentedObjectEnumerator;
@property(readonly, nonatomic) NSEnumerator *shallowNodeEnumerator;
@property(readonly, nonatomic) NSEnumerator *deepNodeEnumerator;
@property(readonly, copy, nonatomic) NSSet *childNodes;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 childNodes:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

