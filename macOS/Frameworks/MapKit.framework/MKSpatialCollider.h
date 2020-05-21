//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSFastEnumeration-Protocol.h>

@class _MKSpatialColliderPairSet;

__attribute__((visibility("hidden")))
@interface MKSpatialCollider : NSObject <NSFastEnumeration>
{
    long long _options;
    _MKSpatialColliderPairSet *_previousCollisionPairs;
    _MKSpatialColliderPairSet *_registeredCollisonPairs;
    BOOL _isVertical;
    struct vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *>> _sortedAnnotationViews;
    double _maxLength;
    unsigned long long mutator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)registeredCollissions;
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2 fromIndex:(long long)arg3 length:(double)arg4;
- (id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1;
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(BOOL)arg2;
- (unsigned long long)insertAnnotationView:(id)arg1;
- (id)annotationViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)viewCount;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3;

@end

