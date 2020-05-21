//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACDClient, NSDictionary, NSSet;

@interface ACDClientAuthorization : NSObject
{
    BOOL _isGranted;
    ACDClient *_client;
    NSSet *_grantedPermissions;
    NSDictionary *_options;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(retain) NSSet *grantedPermissions; // @synthesize grantedPermissions=_grantedPermissions;
@property(retain) ACDClient *client; // @synthesize client=_client;
@property BOOL isGranted; // @synthesize isGranted=_isGranted;
- (id)initForClient:(id)arg1;

@end

