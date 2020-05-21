//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _KSCloudKitManager, _KSControlFileController, _KSRequestThrottle, _KSSystemTask;
@protocol OS_dispatch_queue;

@interface _KSUserWordsSynchroniser : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSCloudKitManager *_cloudKitManager;
    _KSControlFileController *_controlFile;
    _KSSystemTask *_pushTask;
    BOOL _taskRun;
    NSArray *_languagesIfOffline;
    BOOL _attemptingConnection;
    BOOL _retryPending;
    BOOL _needRetry;
    _KSRequestThrottle *_identityThrottle;
}

+ (Class)infoClass;
+ (id)sharedInstance;
+ (id)generateRecordNameForFilename:(id)arg1 withKey:(id)arg2;
+ (id)generateKeyWithSize:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)deleteZoneWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dumpAllRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)overwriteFilesWithRecords:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)readFilesWithRecordIDs:(id)arg1 forColumns:(id)arg2 priority:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (BOOL)checkErrors:(id)arg1;
- (id)recordIDForLanguage:(id)arg1 withKey:(id)arg2;
- (id)filenameForLanguage:(id)arg1;
- (id)generateRecordListForLanguages:(id)arg1;
- (void)deltaDownloadForLanguages:(id)arg1;
- (void)firstTimeDownloadWithKey:(id)arg1;
- (void)checkConfiguration;
- (void)generateKeyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)keyboardUsed;
- (void)checkForDownload:(id)arg1 uploads:(id)arg2 allLanguages:(id)arg3;
- (void)checkProgress:(int)arg1 withInfo:(id)arg2;
- (void)identitiesDidChange:(id)arg1;
- (void)accountDidChange:(id)arg1;
@property(retain, nonatomic) NSArray *requiredLanguages;
- (void)modifyInformationWithOperations:(CDUnknownBlockType)arg1;
- (id)information;
- (void)disable;
- (void)dealloc;
- (id)init;
- (id)initForTestingWithManager:(id)arg1 enablePushing:(BOOL)arg2;
- (id)containerID;

@end

