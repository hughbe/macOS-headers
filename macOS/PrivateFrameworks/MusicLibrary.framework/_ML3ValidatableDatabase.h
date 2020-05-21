//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3ValidatableDatabase : NSObject
{
    unsigned long long _queueID;
    NSString *_databasePath;
    unsigned long long _validationState;
    NSObject<OS_dispatch_queue> *_validationSerialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue; // @synthesize validationSerialQueue=_validationSerialQueue;
@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (BOOL)currentQueueIsValidationQueue;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;

@end

