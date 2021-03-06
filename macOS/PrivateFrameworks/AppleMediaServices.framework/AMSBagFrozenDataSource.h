//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagDataSourceProtocol-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSBagKeySet, NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSSecureCoding>
{
    NSDate *_expirationDate;
    NSString *_profile;
    NSString *_profileVersion;
    AMSBagKeySet *_bagKeySet;
    NSArray *_cookies;
    NSDictionary *_data;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSDictionary *data; // @synthesize data=_data;
@property(readonly) NSArray *cookies; // @synthesize cookies=_cookies;
@property(readonly) AMSBagKeySet *bagKeySet; // @synthesize bagKeySet=_bagKeySet;
@property(readonly, copy) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy) NSString *profile; // @synthesize profile=_profile;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)bagKeyInfoForKey:(id)arg1;
@property(readonly, getter=isLoaded) BOOL loaded;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6;

// Remaining properties
@property(copy) CDUnknownBlockType dataSourceChangedHandler;
@property(copy) CDUnknownBlockType dataSourceDataInvalidatedHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

