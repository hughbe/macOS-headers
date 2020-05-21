//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID, _ML3DatabaseConnectionSubPool;
@protocol ML3DatabaseConnectionPoolDelegate, OS_dispatch_queue;

@interface ML3DatabaseConnectionPool : NSObject
{
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    int _connectionsProfilingLevel;
    BOOL _useDistantWriterConnections;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _poolLockCondition;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _poolLockMutex;
    BOOL _closed;
    BOOL _locked;
    NSString *_databasePath;
    id <ML3DatabaseConnectionPoolDelegate> _delegate;
    unsigned long long _maxReaders;
    unsigned long long _maxWriters;
    unsigned long long _connectionsJournalingMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic) unsigned long long connectionsJournalingMode; // @synthesize connectionsJournalingMode=_connectionsJournalingMode;
@property(readonly, nonatomic) unsigned long long maxWriters; // @synthesize maxWriters=_maxWriters;
@property(readonly, nonatomic) unsigned long long maxReaders; // @synthesize maxReaders=_maxReaders;
@property(nonatomic) __weak id <ML3DatabaseConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (id)_localConnectionForThread:(id)arg1;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (id)_connectionForIdentifier:(id)arg1;
- (id)_generateDiagnostic;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)arg1;
@property(nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
- (void)lockAndCloseAllConnectionsForTermination;
- (void)unlock;
- (void)lock;
- (void)closeAllConnections;
- (void)checkInConnection:(id)arg1;
- (id)_connectionForWriting:(BOOL)arg1 useThreadConnection:(BOOL)arg2 storeThreadLocalConnection:(BOOL)arg3;
@property(readonly) BOOL isCurrentThreadConnectionInTransaction;
- (id)writerConnection;
- (id)readerConnection;
@property(nonatomic) BOOL useDistantWriterConnections;
@property(nonatomic) int connectionsProfilingLevel;
- (void)dealloc;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 maxWriters:(unsigned long long)arg3;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2;

@end

