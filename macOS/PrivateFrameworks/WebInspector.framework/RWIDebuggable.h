//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, RWIApplication;
@protocol RWIDebuggableDelegate, RWIDebugger;

@interface RWIDebuggable : NSObject
{
    id <RWIDebuggableDelegate> _delegate;
    NSString *_uuid;
    NSNumber *_pageId;
    NSString *_url;
    NSString *_title;
    NSString *_displayName;
    NSDictionary *_userInfo;
    RWIApplication *_application;
    long long _type;
    long long _debuggerState;
    RWIApplication *_proxyApplication;
    id <RWIDebugger> _debugger;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RWIDebugger> debugger; // @synthesize debugger=_debugger;
@property(readonly, nonatomic) RWIApplication *proxyApplication; // @synthesize proxyApplication=_proxyApplication;
@property(readonly, nonatomic) long long debuggerState; // @synthesize debuggerState=_debuggerState;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) RWIApplication *application; // @synthesize application=_application;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSNumber *pageId; // @synthesize pageId=_pageId;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <RWIDebuggableDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hostApplicationNowAvailable:(id)arg1;
- (void)changeURL:(id)arg1 title:(id)arg2 debuggerState:(long long)arg3 userInfo:(id)arg4;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) RWIApplication *owningApplication; // @dynamic owningApplication;
- (void)setIndicating:(BOOL)arg1;
- (id)initWithApplication:(id)arg1 proxyApplication:(id)arg2 pageId:(id)arg3 url:(id)arg4 title:(id)arg5 type:(long long)arg6 debuggerState:(long long)arg7 userInfo:(id)arg8;

@end

