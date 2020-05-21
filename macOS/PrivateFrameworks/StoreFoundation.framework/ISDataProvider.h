//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSCopying-Protocol.h>

@class ISAuthenticationContext, ISStoreClient, NSNumber, NSString, NSURL;

@interface ISDataProvider : NSObject <NSCopying>
{
    ISAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    NSURL *_redirectURL;
    int _bagType;
    ISStoreClient *_storeClient;
}

+ (id)provider;
+ (id)providerWithStoreClient:(id)arg1;
- (void).cxx_destruct;
@property int bagType; // @synthesize bagType=_bagType;
@property(readonly) ISStoreClient *storeClient; // @synthesize storeClient=_storeClient;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain) id output; // @synthesize output=_output;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) ISAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void)setup;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
@property(readonly) long long streamedBytes;
- (void)resetStream;
- (void)migrateOutputFromSubProvider:(id)arg1;
@property(readonly, getter=isStream) BOOL stream;
- (void)configureFromProvider:(id)arg1;
- (void)closeStreamReturningError:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithStoreClient:(id)arg1;

@end

