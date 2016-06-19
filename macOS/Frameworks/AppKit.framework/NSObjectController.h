//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSController.h>

@class NSArray, NSManagedObjectContext, NSPredicate, NSString;

@interface NSObjectController : NSController
{
    void *_reserved3;
    id _managedProxy;
    struct __objectControllerFlags {
        unsigned int _editable:1;
        unsigned int _automaticallyPreparesContent:1;
        unsigned int _hasLoadedData:1;
        unsigned int _explicitlyCannotAdd:1;
        unsigned int _explicitlyCannotRemove:1;
        unsigned int _isUsingManagedProxy:1;
        unsigned int _hasFetched:1;
        unsigned int _batches:1;
        unsigned int _reservedObjectController:24;
    } _objectControllerFlags;
    NSString *_objectClassName;
    Class _objectClass;
    NSArray *_contentObjectArray;
    id _content;
    id _objectHandler;
}

+ (id)_modelAndProxyKeys;
+ (id)_keyValueBindingAccessPoints;
+ (id)_defaultObjectClassName;
+ (Class)_defaultObjectClass;
+ (id)_nonAutomaticObservingKeys;
+ (void)initialize;
@property(readonly) id selection;
@property(readonly, copy) NSArray *selectedObjects;
- (id)_controllerKeys;
- (BOOL)_validateSingleValue:(id *)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)_validateSingleValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3;
- (void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_setSingleValue:(id)arg1 forKey:(id)arg2;
- (id)_singleMutableArrayValueForKeyPath:(id)arg1;
- (id)_singleMutableArrayValueForKey:(id)arg1;
- (id)_singleValueForKeyPath:(id)arg1;
- (id)_singleValueForKey:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canAdd;
- (BOOL)_explicitlyCannotRemove;
- (BOOL)_explicitlyCannotAdd;
- (void)_setExplicitlyCannotAdd:(BOOL)arg1 remove:(BOOL)arg2;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)_executeAdd:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)prepareContent;
- (void)_prepareContentWithNewObject:(id)arg1;
- (id)newObject;
@property Class objectClass;
- (id)_objectClassName;
- (void)_setObjectClassName:(id)arg1;
@property(getter=isEditable) BOOL editable;
- (void)_changeEditable:(BOOL)arg1;
@property BOOL automaticallyPreparesContent;
- (void)_markHasLoadedData:(BOOL)arg1;
@property(retain) id content;
- (void)_notifyOfAnyContentChange;
- (void)_notifyEditorStateChanged:(BOOL)arg1;
- (void)_setObjectHandler:(id)arg1;
- (id)description;
- (void)_dealloc;
- (void)awakeFromNib;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;
- (id)init;
- (void)_init;
- (void)_reactToMatchingInsertions:(id)arg1 deletions:(id)arg2 refreshed:(id)arg3;
- (BOOL)_needsLiveUpdates;
- (void)fetch:(id)arg1;
- (void)_executeFetch:(id)arg1 didCommitSuccessfully:(BOOL)arg2 actionSender:(id)arg3;
- (BOOL)fetchWithRequest:(id)arg1 merge:(BOOL)arg2 error:(id *)arg3;
- (id)_lazyFetchResultProxyForObjects:(id)arg1;
- (id)_relationshipKeyPathsForPrefetching;
- (BOOL)_performFetchWithRequest:(id)arg1 merge:(BOOL)arg2 error:(id *)arg3;
- (id)_objectIDsFromManagedObjects:(id)arg1;
- (id)_fetchRequestForPerformingFetch;
- (id)defaultFetchRequest;
@property(retain) NSPredicate *fetchPredicate;
@property(copy) NSString *entityName;
- (void)_notifyManagedContextEditorStateChanged:(BOOL)arg1;
@property(retain) NSManagedObjectContext *managedObjectContext;
@property BOOL usesLazyFetching;
- (BOOL)_canModifyManagedContent;
- (id)_managedProxy;
- (BOOL)_isUsingManagedProxy;
- (void)_setUsingManagedProxy:(BOOL)arg1;
- (BOOL)_isManagedController;

@end

