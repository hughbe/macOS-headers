//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSString;

@interface BKSHIDEventHitTestClientContext : NSObject <BSProtobufSerializable, BSXPCSecureCoding>
{
    int _pid;
    unsigned int _contextID;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)protobufSchema;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

