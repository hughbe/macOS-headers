//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EMSearchableIndexQueryGenerator-Protocol.h>

@class NSString;

@interface _EMCompoundQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>
{
}

- (long long)operandFromPredicate:(id)arg1;
- (id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

