//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordPCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_recordZoneIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;

@end

