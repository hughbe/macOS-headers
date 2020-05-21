//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDetectorsCore/NSSecureCoding-Protocol.h>

@class DDBinderInfo, DDGrammar, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface DDNonTerminal : NSObject <NSSecureCoding>
{
    NSMutableArray *_productions;
    DDBinderInfo *_info;
    NSString *_name;
    long long _nonTerminalID;
    DDGrammar *_grammar;
    BOOL _matchesEpsilon;
    BOOL _skippable;
    BOOL _forceNonSkippable;
    struct __DDIndexSet *_followSet;
}

+ (BOOL)supportsSecureCoding;
@property BOOL forceNonSkippable; // @synthesize forceNonSkippable=_forceNonSkippable;
@property BOOL skippable; // @synthesize skippable=_skippable;
@property BOOL matchesEpsilon; // @synthesize matchesEpsilon=_matchesEpsilon;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)appendLocationDescription:(id)arg1 withIndexRef:(long long *)arg2;
- (void)appendDescription:(id)arg1 withIndexRef:(long long *)arg2;
- (void)setBinderInfo:(id)arg1;
- (id)binderInfo;
- (id)productions;
- (void)setProductions:(id)arg1;
- (id)asSymbols;
- (void)addProductionWithSymbols:(id)arg1 location:(id)arg2;
- (void)_reallyAddProductionWithSymbols:(id)arg1 location:(id)arg2;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 inGrammar:(id)arg2;
- (id)init;

@end

