//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _WKSessionState : NSObject
{
    struct SessionState _sessionState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *data;
- (id)_initWithSessionState:(struct SessionState)arg1;
- (id)initWithData:(id)arg1;

@end

