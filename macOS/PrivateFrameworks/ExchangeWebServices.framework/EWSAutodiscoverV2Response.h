//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EWSAutodiscoverV2Response : NSObject
{
    NSString *_host;
    NSString *_authorizationURI;
    NSString *_emailAddress;
    NSString *_user;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, copy, nonatomic) NSString *authorizationURI; // @synthesize authorizationURI=_authorizationURI;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)description;
- (id)initWithHost:(id)arg1 authorizationURI:(id)arg2;

@end

