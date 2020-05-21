//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class COCondition, COConditionBundle, COStatusBar, NSArray, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface COConditionSession : NSObject
{
    NSString *_selectedCondition;
    NSString *_selectedProfile;
    NSArray *_additionalArguments;
    COCondition *_condition;
    COConditionBundle *_bundle;
    NSMutableDictionary *_classDict;
    NSString *_warning;
    NSURL *_bundleURL;
    COStatusBar *_statusBar;
    NSObject<OS_dispatch_queue> *_setUpQueue;
    NSObject<OS_dispatch_queue> *_tearDownQueue;
    CDUnknownBlockType _statusBarPopupFinishedTeardownCallback;
    CDUnknownBlockType _notifyTeardownBeganCallback;
}

+ (BOOL)tearDownAllConditionsWithErrors:(id *)arg1;
+ (void)logSignpostWithConditionStates;
+ (id)getActiveConditions;
+ (id)listAvailableConditions;
+ (BOOL)conditionIsBundledWithFramework:(id)arg1;
+ (id)conditionsBundledWithFramework;
+ (id)loadInformationDict;
+ (id)prepareInfoDictForBuiltInCondition:(id)arg1 error:(id *)arg2;
+ (BOOL)updateConditionCache:(BOOL)arg1 forCondition:(id)arg2 additionalArguments:(id)arg3 conditionBundle:(id)arg4 error:(id *)arg5;
+ (id)removeStaleConditions:(id)arg1;
+ (BOOL)writeConditionCache:(id)arg1 toFileDescriptor:(int)arg2 error:(id *)arg3;
+ (id)loadConditionCacheWithError:(id *)arg1;
+ (id)getBootSessionUUID;
+ (id)findBundleURLForConditionClass:(id)arg1 andError:(id *)arg2;
+ (id)bundleToDict:(id)arg1;
+ (id)getBundleURLsAtPath:(id)arg1;
+ (id)_loadExternalConditionBundleInfo:(id)arg1 supportedConditionData:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType notifyTeardownBeganCallback; // @synthesize notifyTeardownBeganCallback=_notifyTeardownBeganCallback;
@property(copy, nonatomic) CDUnknownBlockType statusBarPopupFinishedTeardownCallback; // @synthesize statusBarPopupFinishedTeardownCallback=_statusBarPopupFinishedTeardownCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tearDownQueue; // @synthesize tearDownQueue=_tearDownQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setUpQueue; // @synthesize setUpQueue=_setUpQueue;
@property(retain, nonatomic) COStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *warning; // @synthesize warning=_warning;
@property(retain, nonatomic) NSMutableDictionary *classDict; // @synthesize classDict=_classDict;
@property(retain, nonatomic) COConditionBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) COCondition *condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) NSArray *additionalArguments; // @synthesize additionalArguments=_additionalArguments;
@property(readonly, copy, nonatomic) NSString *selectedProfile; // @synthesize selectedProfile=_selectedProfile;
@property(readonly, copy, nonatomic) NSString *selectedCondition; // @synthesize selectedCondition=_selectedCondition;
- (BOOL)stopConditionWithCallback:(CDUnknownBlockType)arg1;
- (BOOL)startConditionWithCallback:(CDUnknownBlockType)arg1 teardownStartedCallback:(CDUnknownBlockType)arg2 teardownFinishedCallback:(CDUnknownBlockType)arg3;
- (BOOL)startConditionWithCallback:(CDUnknownBlockType)arg1 andStatusBarNotificationCallback:(CDUnknownBlockType)arg2;
- (BOOL)startConditionWithCallback:(CDUnknownBlockType)arg1;
- (BOOL)hasActiveCondition;
- (void)dealloc;
- (id)initWithConditionIdentifier:(id)arg1 profile:(id)arg2 additionalArgs:(id)arg3;
- (id)initWithConditionIdentifier:(id)arg1 profile:(id)arg2;
- (id)copyLoadedConditionClassName;
- (void)freeStatusBar;
- (BOOL)createStatusBar:(id)arg1 conditionClassDescription:(id)arg2 withProfileDescription:(id)arg3 error:(id *)arg4;
- (BOOL)loadBundleWithPath:(id)arg1 andError:(id *)arg2;
- (BOOL)_setupBundleAtPath:(id)arg1 withError:(id *)arg2;
- (BOOL)loadProfileForBundle:(id)arg1 withError:(id *)arg2;
- (id)className;
- (BOOL)tearDownWithError:(id *)arg1;
- (BOOL)setUpWithError:(id *)arg1;
- (id)userFriendlyNameForSelectedProfile;
- (id)userFriendlyNameForSelectedCondition;

@end

