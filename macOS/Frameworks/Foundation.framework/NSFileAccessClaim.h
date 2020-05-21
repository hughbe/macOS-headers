//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSCountedSet, NSError, NSFileAccessProcessManager, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject <NSSecureCoding>
{
    NSXPCConnection *_client;
    NSString *_claimID;
    NSString *_purposeIDOrNil;
    BOOL _cameFromSuperarbiter;
    unsigned long long _blockageCount;
    BOOL _didWait;
    BOOL _isRevoked;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableSet *_blockingClaims;
    NSCountedSet *_blockingReactorIDs;
    NSMutableArray *_providerCancellationProcedures;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_devaluationProcedures;
    NSMutableArray *_finishingProcedures;
    NSFileAccessProcessManager *_processManager;
    NSObject<OS_dispatch_semaphore> *_claimerWaiter;
    BOOL _hasInvokedClaimer;
    BOOL _shouldEnableMaterializationDuringAccessorBlock;
    id _claimerOrNil;
    CDUnknownBlockType _serverClaimerOrNil;
    NSMutableArray *_sandboxTokens;
    NSObject<OS_dispatch_queue> *_arbiterQueue;
    id _originatingReactorQueueID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)canNewWriteOfItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapExistingWriteOfItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (BOOL)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapNewWriting:(BOOL)arg3 ofItemAtLocation:(id)arg4 options:(unsigned long long)arg5;
@property BOOL shouldEnableMaterializationDuringAccessorBlock; // @synthesize shouldEnableMaterializationDuringAccessorBlock=_shouldEnableMaterializationDuringAccessorBlock;
@property(readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter; // @synthesize claimerWaiter=_claimerWaiter;
- (BOOL)shouldCancelInsteadOfWaiting;
@property(readonly, copy) NSArray *allURLs;
- (void)disavowed;
- (void)finished;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (BOOL)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long *)arg2 andIfSoThenReevaluateSelf:(CDUnknownBlockType)arg3;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (BOOL)isRevoked;
- (BOOL)isGranted;
- (void)devalueOldClaim:(id)arg1;
- (void)cancelled;
- (void)devalueSelf;
- (void)revoked;
- (void)invokeClaimer;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (BOOL)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)canAccessLocations:(id)arg1 forReading:(BOOL)arg2 error:(id *)arg3;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(BOOL)arg2 relinquishUsingProcedureGetter:(CDUnknownBlockType)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(CDUnknownBlockType)arg2;
- (void)makeProvidersProvideItemsForReadingLocations:(id)arg1 options:(unsigned long long *)arg2 andWritingLocationsIfNecessary:(id)arg3 options:(unsigned long long *)arg4 thenContinue:(CDUnknownBlockType)arg5;
- (void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg1 options:(unsigned long long *)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (BOOL)shouldMakeProviderProvideItemAtLocation:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)ensureProvidersOfItemsAtReadingLocations:(id)arg1 writingLocations:(id)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)granted;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)removePendingClaims:(id)arg1;
- (id)pendingClaims;
- (void)addPendingClaim:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (void)scheduleBlockedClaim:(id)arg1;
- (void)givePriorityToClaim:(id)arg1;
- (BOOL)isBlockedByClaimWithPurposeID:(id)arg1;
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (void)removeBlockingReactorID:(id)arg1;
- (void)addBlockingReactorID:(id)arg1;
- (void)whenFinishedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenDevaluedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenRevokedPerformProcedure:(CDUnknownBlockType)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (id)claimerError;
- (void)setClaimerError:(id)arg1;
- (void)unblockClaimerForReason:(id)arg1;
- (void)blockClaimerForReason:(id)arg1;
- (BOOL)didWait;
- (void)unblock;
- (void)block;
- (void)startObservingClientState;
- (BOOL)cameFromSuperarbiter;
- (void)setCameFromSuperarbiter;
- (void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(CDUnknownBlockType)arg3;
- (void)prepareClaimForGrantingWithArbiterQueue:(id)arg1;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (int)clientProcessIdentifier;
- (id)purposeID;
- (id)claimID;
- (id)client;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3;
- (BOOL)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1;
- (BOOL)shouldWritingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;
- (BOOL)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;

@end

