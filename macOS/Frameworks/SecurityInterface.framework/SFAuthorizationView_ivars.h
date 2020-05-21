//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSDictionary, NSMutableArray, NSString, SFAnimatedLockButton, SFAuthorization;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFAuthorizationView_ivars : NSObject
{
    SFAnimatedLockButton *_button;
    NSButton *_textButton;
    NSString *_textButtonString;
    NSMutableArray *_constraints;
    CDStruct_166d2db6 *_authorizationRights;
    SFAuthorization *_authorization;
    id _delegate;
    int _currentState;
    BOOL _authorized;
    double _timeInterval;
    unsigned int _flags;
    BOOL _initiallyLockedOrHidden;
    NSDictionary *_textAttributes;
    BOOL _asyncOperation;
    NSObject<OS_dispatch_queue> *_interactiveHandlingQueue;
    BOOL _initialized;
}

- (void)dealloc;

@end

