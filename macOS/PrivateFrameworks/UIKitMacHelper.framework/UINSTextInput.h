//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitMacHelper/UINSTextInput-Protocol.h>

@protocol OS_xpc_object, UINSRevealController;

__attribute__((visibility("hidden")))
@interface UINSTextInput : NSObject <UINSTextInput>
{
    NSObject<OS_xpc_object> *remoteTextInputEndpoint;
}

+ (id)sharedTextInput;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *remoteTextInputEndpoint; // @synthesize remoteTextInputEndpoint;
@property(readonly, nonatomic, getter=isFullKeyboardAccessEnabled) BOOL fullKeyboardAccessEnabled;
@property(readonly, nonatomic) id <UINSRevealController> revealController;

@end

