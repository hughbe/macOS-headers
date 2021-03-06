//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScript/NSApplicationDelegate-Protocol.h>

@class NSImageView, NSString, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface OSAAppletDelegate : NSObject <NSApplicationDelegate>
{
    struct ComponentInstanceRecord *_gustav;
    unsigned int _script;
    BOOL _shouldShowSplashDialog;
    BOOL _canChangeSplashDialog;
    BOOL _didShowSplashDialog;
    BOOL _shouldStayOpen;
    NSWindow *_splashDialog;
    NSImageView *_splashIcon;
    NSTextField *_splashText;
}

@property(readonly) BOOL shouldStayOpen;
- (void)idle;
- (short)handleEvent:(const struct AEDesc *)arg1 withReply:(struct AEDesc *)arg2 error:(id *)arg3;
- (void)terminate:(id)arg1;
- (void)presentScriptError:(id)arg1;
- (void)addScriptErrorInfoToEvent:(struct AEDesc *)arg1;
- (void)addScriptErrorKey:(unsigned int)arg1 toEvent:(struct AEDesc *)arg2;
- (id)scriptErrorWithCode:(int)arg1;
- (id)scriptErrorNumberForKey:(unsigned int)arg1;
- (id)scriptErrorStringForKey:(unsigned int)arg1;
- (id)scriptErrorDescriptorOfType:(unsigned int)arg1 forKey:(unsigned int)arg2;
- (void)editScript:(id)arg1;
- (void)editScriptWithErrorRange:(id)arg1;
- (BOOL)isScriptEditable;
- (void)showSplashDialog;
- (BOOL)mustShowSplashDialog;
- (void)quitScript:(id)arg1;
- (void)runScript:(id)arg1;
- (id)scriptDescription;
@property(readonly) BOOL canChangeSplashDialog;
@property BOOL shouldShowSplashDialog;
- (void)_setSplashFlags;
- (unsigned int)script;
- (struct ComponentInstanceRecord *)component;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)canSaveScript;
- (BOOL)needsSaveScript;
- (void)applicationWillFinishLaunching:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

