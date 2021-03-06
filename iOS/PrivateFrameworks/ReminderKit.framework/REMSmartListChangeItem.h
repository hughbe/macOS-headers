/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMSmartListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMSortingStyleReadWriteProtocol> {
    REMChangedKeysObserver * _changedKeysObserver;
    REMSaveRequest * _saveRequest;
    REMSmartListStorage * _storage;
}

@property (nonatomic, retain) REMChangedKeysObserver *changedKeysObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPersisted;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) NSArray *ordering;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, retain) NSData *resolutionTokenMapData;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, copy) NSString *smartListTag;
@property (nonatomic) long long sortingDirection;
@property (nonatomic, copy) NSString *sortingStyle;
@property (nonatomic, readonly, copy) REMSmartListStorage *storage;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)changedKeys;
- (id)changedKeysObserver;
- (void)cleanupOrderingWithReminderIDs:(id)arg1;
- (id)dictionaryFromOrdering:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 changedKeysObserver:(id)arg3;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 observeInitialValues:(bool)arg3;
- (double)maxEnd;
- (double)minStart;
- (void)moveRemindersWithIDs:(id)arg1 afterReminderWithID:(id)arg2;
- (void)moveRemindersWithIDs:(id)arg1 beforeReminderWithID:(id)arg2;
- (void)resetOrderingWithReminderIDs:(id)arg1 start:(double)arg2;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)saveRequest;
- (void)setChangedKeysObserver:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)storage;
- (void)update:(id)arg1 start:(double)arg2 stride:(double)arg3 orderLookup:(id)arg4;
- (id)valueForUndefinedKey:(id)arg1;

@end
