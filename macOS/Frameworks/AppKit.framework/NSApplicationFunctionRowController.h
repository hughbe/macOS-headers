//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSTouchBarFinderObserver-Protocol.h>

@class NSApplicationFunctionRowContainer, NSFunctionRow, NSMutableArray, NSString, NSTouchBarCustomizationController, NSTouchBarEscapeKeyViewController, NSTouchBarFinder, NSTouchBarViewController, _NSQuickActionTouchBarClient;

__attribute__((visibility("hidden")))
@interface NSApplicationFunctionRowController : NSObject <NSTouchBarFinderObserver>
{
    NSFunctionRow *_applicationFunctionRowElement;
    NSFunctionRow *_escapeKeyFunctionRowElement;
    NSMutableArray *_currentBars;
    NSTouchBarViewController *_applicationTouchBarViewController;
    NSTouchBarEscapeKeyViewController *_escapeKeyTouchBarViewController;
    NSTouchBarCustomizationController *_customizationController;
    NSApplicationFunctionRowContainer *_rootContainer;
    NSTouchBarFinder *_finder;
    _NSQuickActionTouchBarClient *_quickActionClient;
    unsigned int _observingPopoversForCustomization:1;
}

+ (id)sharedApplicationFunctionRowController;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(readonly) NSFunctionRow *applicationFunctionRow; // @synthesize applicationFunctionRow=_applicationFunctionRowElement;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_refreshTouchBarView:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_sync;
- (void)_teardown;
- (void)_noteBarsChanged;
@property(readonly) NSTouchBarCustomizationController *_customizationController;
- (void)touchBarFinder:(id)arg1 updatedTouchBars:(id)arg2;
- (void)_setup;
- (void)_updateEscapeKeyItemSize;
- (void)_updateEscapeKeyItem;
@property(readonly) BOOL alwaysWantsEscKeyReplacements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

