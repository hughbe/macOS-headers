//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLRelationshipOrderingState : NSObject
{
    id _oids;
    id _foks;
    BOOL _isMutable;
}

- (void).cxx_destruct;
- (unsigned long long)findIndexForObjectID:(id)arg1 newOrderValue:(long long)arg2 hasOrderValueConflictWithObjectID:(id *)arg3;
- (id)objectIDs;
- (id)orderKeys;
- (BOOL)setOrderValue:(long long)arg1 forObjectID:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)indexForObjectID:(id)arg1;
- (id)description;
- (id)initWithObjectIDs:(id)arg1 orderValues:(id)arg2;

@end

