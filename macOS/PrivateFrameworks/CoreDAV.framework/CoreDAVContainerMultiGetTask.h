//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

#import <CoreDAV/CoreDAVContainerMultiGetSubmittable-Protocol.h>

@class NSError, NSSet, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable>
{
    NSSet *_urls;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
    BOOL _shouldIgnoreResponseErrors;
    NSSet *_additionalPropElements;
    NSSet *_parsedContents;
    NSSet *_missingURLs;
    NSSet *_deletedURLs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *deletedURLs; // @synthesize deletedURLs=_deletedURLs;
@property(readonly, nonatomic) NSSet *missingURLs; // @synthesize missingURLs=_missingURLs;
@property(readonly, nonatomic) NSSet *parsedContents; // @synthesize parsedContents=_parsedContents;
@property(nonatomic) BOOL shouldIgnoreResponseErrors; // @synthesize shouldIgnoreResponseErrors=_shouldIgnoreResponseErrors;
@property(retain, nonatomic) NSSet *additionalPropElements; // @synthesize additionalPropElements=_additionalPropElements;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;

// Remaining properties
@property(nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) id <CoreDAVTaskManager> taskManager;
@property(nonatomic) double timeoutInterval;

@end

