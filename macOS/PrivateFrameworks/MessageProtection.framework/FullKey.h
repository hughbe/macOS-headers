//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol P256PrivateKeyProtocol;

__attribute__((visibility("hidden")))
@interface FullKey : NSObject
{
    int _keyStore;
    id <P256PrivateKeyProtocol> _key;
    NSString *_keychainTag;
}

+ (id)generateNewKeyWithAccess:(id)arg1 forceNoSEP:(BOOL)arg2 error:(id *)arg3;
+ (id)generateNewKeyWithAccess:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
@property(readonly) int keyStore; // @synthesize keyStore=_keyStore;
@property(readonly) id <P256PrivateKeyProtocol> key; // @synthesize key=_key;
- (id)protobuffer;
- (id)description;
- (id)keyIdentifier;
- (id)initWithKeychainTag:(id)arg1 error:(id *)arg2;
- (id)initWithCTKTokenOID:(id)arg1 error:(id *)arg2;
- (id)initWithProtobufferData:(id)arg1 error:(id *)arg2;
- (id)initWithKey:(id)arg1 error:(id *)arg2;

@end

