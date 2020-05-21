//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface MapsSuggestionsMeCard : NSObject <NSCopying>
{
    NSDictionary *_perCNPostalAddress;
    BOOL _hasCorrected;
    BOOL _hasGeocoded;
    BOOL _hasHomeOrWork;
    NSArray *_shortcutsForHome;
    NSArray *_shortcutsForWork;
    NSArray *_hiddenShortcutsForHome;
    NSArray *_hiddenShortcutsForWork;
    NSArray *_shortcutsForAll;
    NSArray *_mapItemsForHome;
    NSArray *_mapItemsForWork;
    NSArray *_mapItemsForAll;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasHomeOrWork; // @synthesize hasHomeOrWork=_hasHomeOrWork;
@property(readonly, nonatomic) BOOL hasGeocoded; // @synthesize hasGeocoded=_hasGeocoded;
@property(readonly, nonatomic) BOOL hasCorrected; // @synthesize hasCorrected=_hasCorrected;
@property(readonly, nonatomic) NSArray *mapItemsForAll; // @synthesize mapItemsForAll=_mapItemsForAll;
@property(readonly, nonatomic) NSArray *mapItemsForWork; // @synthesize mapItemsForWork=_mapItemsForWork;
@property(readonly, nonatomic) NSArray *mapItemsForHome; // @synthesize mapItemsForHome=_mapItemsForHome;
@property(readonly, nonatomic) NSArray *shortcutsForAll; // @synthesize shortcutsForAll=_shortcutsForAll;
@property(readonly, nonatomic) NSArray *hiddenShortcutsForWork; // @synthesize hiddenShortcutsForWork=_hiddenShortcutsForWork;
@property(readonly, nonatomic) NSArray *hiddenShortcutsForHome; // @synthesize hiddenShortcutsForHome=_hiddenShortcutsForHome;
@property(readonly, nonatomic) NSArray *shortcutsForWork; // @synthesize shortcutsForWork=_shortcutsForWork;
@property(readonly, nonatomic) NSArray *shortcutsForHome; // @synthesize shortcutsForHome=_shortcutsForHome;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMeCard:(id)arg1;
- (id)shortcutForCNPostalAddressIdentifier:(id)arg1;
- (id)shortcutsPerCNPostalAddress;
- (id)initWithShortcuts:(id)arg1 hasCorrected:(BOOL)arg2 hasGeocoded:(BOOL)arg3;
- (id)initWithShortcuts:(id)arg1 perCNPostalAddress:(id)arg2 hasCorrected:(BOOL)arg3 hasGeocoded:(BOOL)arg4;
- (id)initWithHomes:(id)arg1 works:(id)arg2 hiddenHomes:(id)arg3 hiddenWorks:(id)arg4 all:(id)arg5 perCNPostalAddress:(id)arg6 hasCorrect:(BOOL)arg7 hasGeocoded:(BOOL)arg8;

@end

