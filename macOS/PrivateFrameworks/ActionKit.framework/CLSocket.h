//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface CLSocket : NSObject
{
    NSString *_APIKey;
    long long _appID;
    NSURL *_authURL;
    NSDictionary *_channels;
}

@property(retain, nonatomic) NSDictionary *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(nonatomic) long long appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

