//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSEditorBinder.h>

@class NSString;

@interface NSValueBinder : NSEditorBinder
{
    struct __valueBinderFlags {
        unsigned int _allowsEditingMultipleValuesSelection:1;
        unsigned int _continuouslyUpdatesValue:1;
        unsigned int _createsSortDescriptor:1;
        unsigned int _isEditing:1;
        unsigned int _useFormattedValue:1;
        unsigned int _ignoreShowValue:1;
        unsigned int _commitOrDiscardEditingInProgress:1;
        unsigned int _hasUncommittedChanges:1;
        unsigned int _revertBackToOriginalValue:1;
        unsigned int _applyObjectValueInProgress:1;
        unsigned int _disardEditingSheetInProgress:1;
        unsigned int _reservedValueBinder:21;
    } _valueBinderFlags;
    id _cachedObjectValue;
    id _cachedDisplayValue;
    id _sortDescriptorPrototype;
    NSString *_referenceBinding;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
+ (id)_pluginProtocol;
+ (void)initialize;
- (void)_didPresentDiscardEditingSheetWithRecovery:(BOOL)arg1 contextInfo:(CDStruct_4fdc8b6f *)arg2;
- (void)_presentDiscardEditingSheetWithError:(id)arg1 discardEditingCallback:(SEL)arg2 otherCallback:(SEL)arg3 callbackContextInfo:(void *)arg4 relatedToBinding:(id)arg5;
- (BOOL)_presentDiscardEditingAlertPanelWithError:(id)arg1 relatedToBinding:(id)arg2;
- (id)defaultSortDescriptorPrototypeForTableColumn:(id)arg1;
- (id)_defaultSortDescriptorPrototypeKey;
- (void)performAction:(id)arg1;
- (BOOL)validateAndCommitValueInEditor:(id)arg1 editingIsEnding:(BOOL)arg2 errorUserInterfaceHandled:(char *)arg3;
- (void)_discardValidateAndCommitValue:(void *)arg1;
- (BOOL)handleValidationError:(id)arg1 description:(id)arg2 inEditor:(id)arg3 errorUserInterfaceHandled:(char *)arg4;
- (void)editorDidEndEditing:(id)arg1;
- (void)editorDidBeginEditing:(id)arg1;
- (void)_endChanging;
- (void)_startChanging;
- (BOOL)isEditing;
- (void)_commitEditingOtherCallback:(CDStruct_f8f0024c *)arg1;
- (void)_commitEditingDiscardEditingCallback:(CDStruct_f8f0024c *)arg1;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (BOOL)commitEditing;
- (BOOL)commitEditingAndReturnError:(id *)arg1;
- (void)discardEditing;
- (BOOL)_applyDisplayedValueIfHasUncommittedChangesWithHandleErrors:(BOOL)arg1 typeOfAlert:(BOOL)arg2 discardEditingCallback:(SEL)arg3 otherCallback:(SEL)arg4 callbackContextInfo:(void *)arg5 didRunAlert:(char *)arg6 error:(id *)arg7;
- (BOOL)applyDisplayedValueHandleErrors:(BOOL)arg1 typeOfAlert:(BOOL)arg2 canRecoverFromErrors:(BOOL)arg3 discardEditingCallback:(SEL)arg4 otherCallback:(SEL)arg5 callbackContextInfo:(void *)arg6 didRunAlert:(char *)arg7 error:(id *)arg8;
- (BOOL)_handleApplyValueResult:(int)arg1 cachedValue:(id)arg2 displayValue:(id)arg3 objectValue:(id)arg4;
- (void)_revertDisplayValueBackToOriginalValue:(void *)arg1;
- (int)_applyObjectValue:(id *)arg1 forBinding:(id)arg2 canRecoverFromErrors:(BOOL)arg3 handleErrors:(BOOL)arg4 typeOfAlert:(BOOL)arg5 discardEditingCallback:(SEL)arg6 otherCallback:(SEL)arg7 callbackContextInfo:(void *)arg8 didRunAlert:(char *)arg9;
- (int)_handleApplyValueError:(id)arg1 forBinding:(id)arg2 canRecoverFromErrors:(BOOL)arg3 handleErrors:(BOOL)arg4 typeOfAlert:(BOOL)arg5 discardEditingCallback:(SEL)arg6 otherCallback:(SEL)arg7 callbackContextInfo:(void *)arg8 didRunAlert:(char *)arg9;
- (BOOL)supportsTableEditing;
- (void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2;
- (void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)updateOutlineColumnOutlineCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (void)_adjustObject:(id)arg1 mode:(struct __NSKeyValueCodingControllerModeType)arg2 observedController:(id)arg3 observedKeyPath:(id)arg4 context:(void *)arg5 editableState:(char *)arg6 adjustState:(char *)arg7;
- (BOOL)selectionSupportsEnabledState;
- (BOOL)objectValueSupportsEnabledState:(id)arg1;
- (BOOL)_isExplicitlyNonEditable;
- (oneway void)releaseConnectionWithSynchronizePeerBinders:(BOOL)arg1;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (id)_referenceBinding;
- (BOOL)createsSortDescriptor;
- (void)setCreatesSortDescriptor:(BOOL)arg1;
- (BOOL)continuouslyUpdatesValue;
- (void)setContinuouslyUpdatesValue:(BOOL)arg1;
- (BOOL)allowsEditingMultipleValuesSelection;
- (void)setAllowsEditingMultipleValuesSelection:(BOOL)arg1;
- (BOOL)_shouldAlwaysUpdateDisplayValue;
- (id)_validateDisplayValue;
- (id)validateObjectValue:(id)arg1;
- (id)_referenceBindingValueAtIndexPath:(id)arg1;
- (id)_referenceBindingValueAtIndex:(unsigned long long)arg1;
- (id)_referenceBindingValue;
- (id)objectValueForDisplayValue:(id)arg1;
- (id)displayValueForObjectValue:(id)arg1;
- (id)_formatter;
- (id)updateInvalidatedObjectValue:(id)arg1 forObject:(id)arg2;
- (id)shownValueInObject:(id)arg1 errorEncountered:(char *)arg2 error:(id *)arg3;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (id)_cachedDisplayValue;
- (void)_cacheDisplayValue:(id)arg1;
- (id)_cachedObjectValue;
- (void)_cacheObjectValue:(id)arg1;
- (BOOL)_cachedValuesAreValid;
- (BOOL)canApplyValueTransformer:(id)arg1 toBinding:(id)arg2;
- (Class)valueClassForBinding:(id)arg1;
- (Class)_valueClass;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (BOOL)_valueClassIsSortableWithBinding:(id)arg1;
- (BOOL)_isReferenceBinding:(id)arg1;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (id)availableBindings;
- (BOOL)isBindingReadOnly:(id)arg1;
- (BOOL)_isBooleanBinding:(id)arg1;
- (BOOL)_supportsMinAndMax;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_dealloc;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_init;

@end

