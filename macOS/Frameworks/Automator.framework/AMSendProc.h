//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMWorkflowRunner, OSALanguage;

@interface AMSendProc : NSObject
{
    void *_oldRefCon;
    CDUnknownFunctionPointerType _oldSendProc;
    CDUnknownFunctionPointerType _sendProc;
    AMWorkflowRunner *_runner;
    OSALanguage *_language;
}

+ (void)initialize;
- (void).cxx_destruct;
@property void *oldRefCon; // @synthesize oldRefCon=_oldRefCon;
@property CDUnknownFunctionPointerType oldSendProc; // @synthesize oldSendProc=_oldSendProc;
@property CDUnknownFunctionPointerType sendProc; // @synthesize sendProc=_sendProc;
@property(retain) OSALanguage *language; // @synthesize language=_language;
@property(retain) AMWorkflowRunner *runner; // @synthesize runner=_runner;
- (void)cleanUp;
- (id)initWithRunner:(id)arg1 forLanguage:(id)arg2;

@end

