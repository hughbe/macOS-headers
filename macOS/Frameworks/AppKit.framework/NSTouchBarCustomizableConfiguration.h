//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface NSTouchBarCustomizableConfiguration : NSObject <NSCopying>
{
    NSString *_identifier;
    NSArray *_defaultItemIdentifiers;
    NSArray *_allowedItemIdentifiers;
    NSArray *_requiredItemIdentifiers;
    NSArray *_customizedItemIdentifiers;
}

+ (id)keyPathsForValuesAffectingPresentedItemIdentifiers;
- (id)debugDescription;
- (id)description;
- (void)_resetCustomization;
- (void)_persistCustomizedItemIdentifiers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterForCustomizationChangesWithIdentifier:(id)arg1;
- (void)_registerForCustomizationChangesWithIdentifier:(id)arg1;
@property(readonly, copy) NSArray *presentedItemIdentifiers;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
@property(copy, getter=_customizedItemIdentifiers, setter=_setCustomizedItemIdentifiers:) NSArray *_customizedItemIdentifiers;
@property(copy) NSArray *requiredItemIdentifiers;
@property(copy) NSArray *allowedItemIdentifiers;
@property(copy) NSArray *defaultItemIdentifiers;
@property(copy) NSString *identifier;

@end

