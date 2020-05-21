//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSString;

@interface SVXClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _processIdentifier;
    NSString *_processName;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithProcessIdentifier:(int)arg1 processName:(id)arg2;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

