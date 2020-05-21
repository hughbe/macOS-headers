//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol ABCardViewMultiValue, ABCollectionAction;

@protocol ABCardViewProperty <NSObject>
- (id (^)(id))multiValueEntryToLabel;
- (NSString *)defaultLabelWithAccountName:(NSString *)arg1;
- (NSString *)defaultLabel;
- (BOOL)allowsCustomLabels;
- (BOOL)needsCardViewBorderDrawing;
- (BOOL)shouldUseAccountNameInLabel;
- (BOOL)canRemove;
- (BOOL)shouldReloadViewOnUserEdit;
- (id <ABCollectionAction>)actionForGlyphName:(NSString *)arg1;
- (NSArray *)actionGlyphNames;
- (BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (id)emptyValueForMultiValue:(id <ABCardViewMultiValue>)arg1 label:(NSString *)arg2;
- (BOOL)isValueEmpty:(id)arg1;
- (BOOL)isLoadedAsynchronously;
- (NSString *)addressBookProperty;
- (BOOL)isMultiValue;
- (NSString *)key;
@end

