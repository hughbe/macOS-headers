//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@interface IOBluetoothPairingController : NSWindowController
{
}

+ (id)withPairingControllerRef:(struct OpaqueIOBluetoothObjectRef *)arg1;
+ (id)alloc;
+ (id)pairingController;
- (id)getPrompt;
- (void)setPrompt:(id)arg1;
- (id)getDescriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)getTitle;
- (void)setTitle:(id)arg1;
- (void)clearAllowedUUIDs;
- (void)addAllowedUUIDArray:(id)arg1;
- (void)addAllowedUUID:(id)arg1;
- (const struct IOBluetoothDeviceSearchAttributes *)getSearchAttributes;
- (void)setSearchAttributes:(const struct IOBluetoothDeviceSearchAttributes *)arg1;
- (unsigned int)getOptions;
- (void)setOptions:(unsigned int)arg1;
- (id)getResults;
- (int)beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (int)runModal;
- (void)runPanelWithAttributes:(struct IOBluetoothDeviceSearchAttributes *)arg1;
- (struct OpaqueIOBluetoothObjectRef *)getPairingControllerRef;

@end

