//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *mimeType;
@property(copy, nonatomic) NSString *securityOrigin;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *loaderId;
@property(copy, nonatomic) NSString *parentId;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5;

@end

