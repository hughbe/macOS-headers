//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>
#import <WorkflowKit/WFActionEventObserver-Protocol.h>
#import <WorkflowKit/WFNaming-Protocol.h>

@class NSArray, NSString, WFActionGroupingCache, WFVariableAvailability, WFWorkflowIcon, WFWorkflowQuarantine, WFWorkflowRecord, WFWorkflowReference;
@protocol WFRecordStorageProvider;

@interface WFWorkflow : NSObject <WFNaming, WFActionEventObserver, NSCopying, NSSecureCoding>
{
    BOOL _saveDisabled;
    NSArray *_actions;
    WFVariableAvailability *_variableAvailability;
    WFActionGroupingCache *_groupingCache;
    NSArray *_inputClasses;
    NSArray *_importQuestions;
    WFWorkflowRecord *_record;
    long long _environment;
    WFWorkflowQuarantine *_quarantine;
    id <WFRecordStorageProvider> _storageProvider;
    WFWorkflowReference *_overridenReference;
}

+ (BOOL)checkClientVersion:(id)arg1 currentVersion:(id)arg2 error:(id *)arg3;
+ (id)localizedSubtitleWithActionCount:(unsigned long long)arg1;
+ (id)effectiveInputClassesFromInputClasses:(id)arg1 workflowTypes:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)defaultName;
+ (id)supportedInputClassNames;
+ (id)supportedInputClasses;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id *)arg5;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL saveDisabled; // @synthesize saveDisabled=_saveDisabled;
@property(readonly, nonatomic) WFWorkflowReference *overridenReference; // @synthesize overridenReference=_overridenReference;
@property(retain, nonatomic) id <WFRecordStorageProvider> storageProvider; // @synthesize storageProvider=_storageProvider;
@property(retain, nonatomic) WFWorkflowQuarantine *quarantine; // @synthesize quarantine=_quarantine;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) WFWorkflowRecord *record; // @synthesize record=_record;
@property(copy, nonatomic) NSArray *importQuestions; // @synthesize importQuestions=_importQuestions;
@property(copy, nonatomic) NSArray *inputClasses; // @synthesize inputClasses=_inputClasses;
- (BOOL)isUntitled;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)loadActionDescriptionIconsMaxCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizedSubtitle;
- (id)localizedActionsSummary;
- (id)effectiveInputClasses;
- (void)action:(id)arg1 didChangeVariableName:(id)arg2 to:(id)arg3;
- (void)updateVariablesForAction:(id)arg1 includingImportedVariables:(BOOL)arg2;
@property(readonly, nonatomic) WFVariableAvailability *variableAvailability; // @synthesize variableAvailability=_variableAvailability;
- (void)actionOutputDetailsDidChange:(id)arg1;
- (void)actionNameDidChange:(id)arg1;
- (void)action:(id)arg1 supplementalParameterValueDidChangeForKey:(id)arg2;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)actionForSuggestionsDrawer;
- (id)actionsGroupedWithAction:(id)arg1;
@property(readonly, nonatomic) WFActionGroupingCache *groupingCache; // @synthesize groupingCache=_groupingCache;
- (void)moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (void)insertActions:(id)arg1 atIndexes:(id)arg2;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeActions:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)setActions:(id)arg1;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)initializeAddedAction:(id)arg1;
- (void)configureWithShortcut:(id)arg1;
- (void)configureAsSingleStepShortcutIfNecessary:(CDUnknownBlockType)arg1;
- (void)saveActionsToRecordIfNeeded;
- (void)performBatchOperation:(CDUnknownBlockType)arg1;
- (void)authorizeAccessResourcesIfNeeded;
- (void)loadFromRecord;
- (void)reloadFromRecord;
- (void)save;
- (BOOL)hasStorageProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (id)workflowByClearingPrivateImportQuestionData;
- (id)validImportQuestions;
@property(nonatomic) long long remoteQuarantineStatus;
@property(nonatomic) BOOL hiddenFromLibraryAndSync;
@property(nonatomic) BOOL hiddenInComplication;
@property(copy, nonatomic) NSArray *workflowTypes;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSString *galleryIdentifier;
@property(readonly, nonatomic) NSString *associatedAppBundleIdentifier;
@property(readonly, nonatomic) NSString *actionsDescription;
@property(readonly, nonatomic) NSString *workflowSubtitle;
@property(retain, nonatomic) WFWorkflowIcon *icon;
@property(copy, nonatomic) NSString *legacyName;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *workflowID;
@property(readonly, nonatomic) WFWorkflowReference *reference;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(BOOL)arg3 environment:(long long)arg4 error:(id *)arg5;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 error:(id *)arg3;
- (void)overrideReference:(id)arg1;
- (id)init;
- (void)generateShortcutRepresentation:(CDUnknownBlockType)arg1;
- (id)initWithShortcut:(id)arg1 error:(id *)arg2;
- (id)initWithActionDonation:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 description:(id)arg2 associatedAppBundleIdentifier:(id)arg3 actions:(id)arg4;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)eventDictionary;
- (id)createUserActivityForViewing;
- (void)setEditingDelegate:(id)arg1;
- (id)editingDelegate;
@property(readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
- (void)requestToRunScriptsOnDomain:(id)arg1 withUserInterface:(id)arg2 database:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

