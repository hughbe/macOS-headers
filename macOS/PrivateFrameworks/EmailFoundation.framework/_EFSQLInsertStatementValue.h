//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface _EFSQLInsertStatementValue : NSObject
{
    NSMutableOrderedSet *_requiredColumns;
    NSMutableDictionary *_bindables;
    NSMutableDictionary *_expressables;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *expressables; // @synthesize expressables=_expressables;
@property(retain, nonatomic) NSMutableDictionary *bindables; // @synthesize bindables=_bindables;
@property(retain, nonatomic) NSMutableOrderedSet *requiredColumns; // @synthesize requiredColumns=_requiredColumns;
- (id)initWithRequiredColumns:(id)arg1;

@end

