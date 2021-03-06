//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitInfo : PBCodable <NSCopying>
{
    unsigned long long _reportClientOperationFrequency;
    unsigned long long _reportClientOperationFrequencyBase;
    unsigned long long _reportOperationGroupFrequency;
    unsigned long long _reportOperationGroupFrequencyBase;
    NSString *_clientBundleId;
    NSMutableArray *_clientOperations;
    NSString *_clientProcessVersion;
    NSString *_container;
    NSString *_environment;
    NSMutableArray *_operationGroups;
    BOOL _anonymous;
    struct {
        unsigned int reportClientOperationFrequency:1;
        unsigned int reportClientOperationFrequencyBase:1;
        unsigned int reportOperationGroupFrequency:1;
        unsigned int reportOperationGroupFrequencyBase:1;
        unsigned int anonymous:1;
    } _has;
}

+ (Class)clientOperationType;
+ (Class)operationGroupType;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long reportClientOperationFrequencyBase; // @synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase;
@property(nonatomic) unsigned long long reportClientOperationFrequency; // @synthesize reportClientOperationFrequency=_reportClientOperationFrequency;
@property(retain, nonatomic) NSMutableArray *clientOperations; // @synthesize clientOperations=_clientOperations;
@property(nonatomic) unsigned long long reportOperationGroupFrequencyBase; // @synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase;
@property(nonatomic) unsigned long long reportOperationGroupFrequency; // @synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency;
@property(retain, nonatomic) NSMutableArray *operationGroups; // @synthesize operationGroups=_operationGroups;
@property(nonatomic) BOOL anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
@property(retain, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(retain, nonatomic) NSString *clientProcessVersion; // @synthesize clientProcessVersion=_clientProcessVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasReportClientOperationFrequencyBase;
@property(nonatomic) BOOL hasReportClientOperationFrequency;
- (id)clientOperationAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientOperationsCount;
- (void)addClientOperation:(id)arg1;
- (void)clearClientOperations;
@property(nonatomic) BOOL hasReportOperationGroupFrequencyBase;
@property(nonatomic) BOOL hasReportOperationGroupFrequency;
- (id)operationGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)operationGroupsCount;
- (void)addOperationGroup:(id)arg1;
- (void)clearOperationGroups;
@property(nonatomic) BOOL hasAnonymous;
@property(readonly, nonatomic) BOOL hasEnvironment;
@property(readonly, nonatomic) BOOL hasContainer;
@property(readonly, nonatomic) BOOL hasClientBundleId;
@property(readonly, nonatomic) BOOL hasClientProcessVersion;

@end

