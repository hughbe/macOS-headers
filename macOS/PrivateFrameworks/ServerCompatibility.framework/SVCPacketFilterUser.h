//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SVCPacketFilterUser : NSObject
{
    struct __PFUser *_baseUser;
    struct __PFUser *_user;
    long long _baseTransactionID;
    long long _transactionID;
}

+ (id)alloc;
+ (id)sharedUser;
@property long long transactionID; // @synthesize transactionID=_transactionID;
@property long long baseTransactionID; // @synthesize baseTransactionID=_baseTransactionID;
@property struct __PFUser *user; // @synthesize user=_user;
@property struct __PFUser *baseUser; // @synthesize baseUser=_baseUser;
- (void)printRulesToPath:(id)arg1;
- (_Bool)flushRules;
- (_Bool)clearTransaction;
- (_Bool)commitTransaction;
- (_Bool)addRuleToTransactionWithAddress:(id)arg1 portRange:(id)arg2 protocol:(id)arg3 action:(id)arg4;
- (_Bool)beginTransaction;
- (_Bool)flushBaseRules;
- (_Bool)setBaseRules;
- (_Bool)hasBaseRules;
- (void)dealloc;
- (id)init;

@end

