//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>
{
    NSString *_environmentName;
    NSString *_namedDelegatePort;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *namedDelegatePort; // @synthesize namedDelegatePort=_namedDelegatePort;
@property(copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;

@end

