//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBinder.h>

@interface NSEditableBinder : NSBinder
{
    struct __editableBinderFlags {
        unsigned int _objectSupportsEditable:1;
        unsigned int _referenceBinderRequestedEditableState:1;
        unsigned int _referenceBinderDidRequestEditableState:1;
        unsigned int _numberOfEditableBindings:4;
        unsigned int _objectSupportsEnabled:1;
        unsigned int _referenceBinderRequestedEnabledState:1;
        unsigned int _referenceBinderDidRequestEnabledState:1;
        unsigned int _numberOfEnabledBindings:4;
        unsigned int _objectSupportsHidden:1;
        unsigned int _referenceBinderRequestedHiddenState:1;
        unsigned int _referenceBinderDidRequestHiddenState:1;
        unsigned int _numberOfHiddenBindings:4;
        unsigned int _reservedEditableBinder:11;
    } _editableBinderFlags;
}

+ (id)bindingsForObject:(id)arg1;
+ (id)_enumeratedHiddenBindings:(unsigned long long)arg1;
+ (id)_enumeratedEnabledBindings:(unsigned long long)arg1;
+ (id)_enumeratedEditableBindings:(unsigned long long)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (id)bindingCategory;
+ (id)_pluginProtocol;
- (void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2;
- (void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (BOOL)shouldProcessObservations;
- (void)_setStatesImmediatelyInObject:(id)arg1 mode:(struct __NSKeyValueCodingControllerModeType)arg2 triggerRedisplay:(BOOL)arg3;
- (BOOL)_hiddenStateWithMode:(struct __NSKeyValueCodingControllerModeType)arg1;
- (BOOL)hiddenStateAtIndexPath:(id)arg1;
- (BOOL)hiddenStateAtIndex:(unsigned long long)arg1;
- (BOOL)hiddenState;
- (BOOL)_enabledStateWithMode:(struct __NSKeyValueCodingControllerModeType)arg1;
- (BOOL)enabledStateAtIndexPath:(id)arg1;
- (BOOL)enabledStateAtIndex:(unsigned long long)arg1;
- (BOOL)enabledState;
- (BOOL)_editableStateWithMode:(struct __NSKeyValueCodingControllerModeType)arg1;
- (BOOL)editableStateAtIndexPath:(id)arg1;
- (BOOL)editableStateAtIndex:(unsigned long long)arg1;
- (BOOL)editableState;
- (void)_requestAnyHiddenState;
- (void)_requestHiddenState:(BOOL)arg1;
- (void)_requestAnyEnabledState;
- (void)_requestEnabledState:(BOOL)arg1;
- (void)_requestAnyEditableState;
- (void)_requestEditableState:(BOOL)arg1;
- (void)_synchronizeWithPeerBindersInArray:(id)arg1;
- (void)_clearDependenciesWithAllPeerBinders;
- (void)removeBinding:(id)arg1;
- (void)addBinding:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformer:(id)arg4 options:(id)arg5;
- (void)_countBindings;
- (id)availableBindings;
- (BOOL)_isBooleanBinding:(id)arg1;
- (BOOL)isBindingReadOnly:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;
- (void)_setObject:(id)arg1;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)_init;

@end

